#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb_top.h"             // From verilator --top-module tb_top
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Forward declare our helper
std::vector<uint8_t> read_memfile(const std::string &path);

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Instantiate DUT
    Vtb_top *tb = new Vtb_top;

    // VCD trace setup
    VerilatedVcdC *tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("sim/vlt_dump.vcd");

    // +PACKET_FILE=messages/sample.mem
    const char *memfile = Verilated::commandArgsPlusMatch("PACKET_FILE=");
    if (!memfile) {
        std::cerr << "ERROR: missing +PACKET_FILE=<path>\n";
        return 1;
    }
    auto packet_bytes = read_memfile(memfile);

    // Initialize inputs
    tb->rst_n         = 0;
    tb->clk           = 0;
    tb->in_valid      = 0;
    tb->in_byte       = 0;
    tb->payload_ready = 1;  // pipeline_regs.sv ready signal

    // Release reset after 10 cycles
    for (int i = 0; i < 10; i++) {
        tb->clk = 0; tb->eval(); tfp->dump(main_time++);
        tb->clk = 1; tb->eval(); tfp->dump(main_time++);
    }
    tb->rst_n = 1;

    // Open output capture
    std::ofstream out("sim/output_capture.txt");

    // Main sim loop (enough cycles to send all bytes + some slack)
    size_t idx = 0;
    size_t max_cycles = packet_bytes.size() * 2 + 100;
    for (size_t cycle = 0; cycle < max_cycles && !Verilated::gotFinish(); cycle++) {
        // Clock low
        tb->clk = 0;
        tb->eval();
        tfp->dump(main_time++);

        // Clock high & drive inputs
        tb->clk = 1;
        if (idx < packet_bytes.size()) {
            tb->in_valid = 1;
            tb->in_byte  = packet_bytes[idx++];
        } else {
            tb->in_valid = 0;
        }
        tb->eval();
        tfp->dump(main_time++);

        // Capture trading decisions
        if (tb->decision_valid) {
            out << main_time
                << ": ORDER id=0x" << std::hex << tb->decision_order_id
                << " price="    << std::dec << tb->decision_price
                << " size="     << tb->decision_size
                << "\n";
        }
    }

    // Tear down
    tfp->close();
    delete tb;
    out.close();
    return 0;
}
