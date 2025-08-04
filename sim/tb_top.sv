// ============================================================
// File: tb_top.sv
// Top-level SystemVerilog testbench for Verilator
// ============================================================

`include "eth_rx.sv"
`include "parser.sv"
`include "trading_logic.sv"
`include "uart_tx.sv"
`include "pipeline_regs.sv"

module tb_top;
  logic clk = 0;
  logic rst_n = 0;
  always #5 clk = ~clk; // 100MHz clock

  // Instantiate signals and modules...
  // TODO: connect in_byte, in_valid from a C++ harness via DPI or command-line driven regs

  initial begin
    #100;
    rst_n = 1;
    // C++ harness will drive inputs and monitor outputs
    #10000;
    $finish;
  end
endmodule
