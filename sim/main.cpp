// sim/main.cpp
// Verilator C++ harness: instantiates DUT, drives rx_byte, captures uart_tx into output_capture.txt
#include "Vtb_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <vector>
#include <fstream>
#include "file_reader.cpp"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("vlt_dump.vcd");

    auto mem = load_mem("messages/sample.mem");
    std::ofstream out("sim/output_capture.txt");

    // initialize
    top->clk = 0;
    top->rst_n = 0;
    for (int i = 0; i < 2; i++, top->clk = !top->clk) {
        top->eval();
        tfp->dump(i);
    }
    top->rst_n = 1;

    // drive bytes
    for (size_t i = 0; i < mem.size(); i++) {
        top->rx_valid = 1;
        top->rx_byte  = mem[i];
        top->clk = 0; top->eval(); tfp->dump(2*i+0);
        top->clk = 1; top->eval(); tfp->dump(2*i+1);
        out << (int)top->uart_tx << "\n";
    }
    // flush
    for (int i = 0; i < 100; i++) {
        top->clk = 0; top->eval(); tfp->dump(mem.size()*2 + i*2);
        top->clk = 1; top->eval(); tfp->dump(mem.size()*2 + i*2+1);
    }

    out.close();
    tfp->close();
    delete top;
    delete tfp;
    return 0;
}