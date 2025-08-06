#include "Vtb_top.h"
#include "verilated.h"
#include <fstream>
#include <vector>
#include <cstdint>
#include <iomanip>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_top* top = new Vtb_top;

    // Load raw Ethernet+ITCH frames
    std::vector<uint8_t> packet_bytes;
    {
        std::ifstream in("../messages/packets.bin", std::ios::binary);
        packet_bytes.assign(
            std::istreambuf_iterator<char>(in),
            std::istreambuf_iterator<char>()
        );
    }
    const int extra_cycles = packet_bytes.size() * 16;

    // Open output files
    std::ofstream uart_out    ("../sim/output_capture.txt");
    std::ofstream payload_out ("../sim/payload_capture.txt");
    std::ofstream parser_out  ("../sim/parser_log.txt");
    std::ofstream decision_out("../sim/decision_log.txt");

    // Reset sequence (10 half-cycles)
    top->clk   = 0;
    top->rst_n = 0;
    top->eval();
    for (int i = 0; i < 10; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    top->rst_n = 1;
    top->eval();

    // Drive each byte and capture per full cycle
    for (auto byte : packet_bytes) {
        top->rx_byte  = byte;
        top->rx_valid = 1;

        // Full clock cycle
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();

        // Payload capture
        if (top->payload_valid) {
            payload_out << std::hex << std::setw(2) << std::setfill('0')
                                    << int(top->payload_byte) << "\n";
        }

        // Parser log with timestamp
        if (top->field_valid) {
            parser_out << "PARSED @" << top->t_parser
                       << " type=" << char(top->msg_type)
                       << " price=" << std::dec << top->price
                       << " volume=" << top->volume << "\n";
        }
    }

    // Deassert rx_valid to flush pipeline
    top->rx_valid = 0;
    top->eval();

    // Extra cycles to flush remaining UART bits
    for (int i = 0; i < extra_cycles; i++) {
        top->clk = 0; top->eval();
        uart_out << int(top->uart_tx) << "\n";

        top->clk = 1; top->eval();

        // Decision log with latency breakdown
        if (top->decision_valid) {
            uint32_t ingress = top->t_ingress;
            uint32_t parser_t = top->t_parser;
            uint32_t logic_t  = top->t_logic;
            uint32_t decision = top->cycle_cnt;
            uint32_t total_latency = decision - ingress;

            decision_out << "TRADE @" << decision
                         << " (ingress@" << ingress
                         << ", parser@" << parser_t
                         << ", logic@" << logic_t << ")"
                         << " order_id=" << top->order_id
                         << " price="    << top->price
                         << " volume="   << top->volume << "\n";
            decision_out << "LATENCY: total=" << total_latency << " cycles\n";
        }

        uart_out << int(top->uart_tx) << "\n";
    }

    // Clean up
    uart_out.close();
    payload_out.close();
    parser_out.close();
    decision_out.close();
    delete top;
    return 0;
}