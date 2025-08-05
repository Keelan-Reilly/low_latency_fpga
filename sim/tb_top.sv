`timescale 1ns/1ps

// Top‐level SystemVerilog testbench for your FPGA HFT feed handler.
// Instantiate eth_rx → parser → trading_logic → (optional) uart_tx.
// Exposes a simple handshake to the Verilator C++ harness via plusargs.

module tb_top (
  // Driven by Verilator main.cpp:
  input  logic        clk,
  input  logic        rst_n,
  input  logic        in_valid,
  input  logic [7:0]  in_byte,
  input  logic        payload_ready,
  // Observed by Verilator main.cpp:
  output logic        decision_valid,
  output logic [7:0]  decision_msg_type,
  output logic [15:0] decision_price,
  output logic [15:0] decision_size
);

  // ------------------------------------------------------------------
  // Internal nets between pipeline stages
  // ------------------------------------------------------------------
  // eth_rx → parser
  logic        eth_out_valid;
  logic [7:0]  eth_out_byte;

  // parser → trading_logic
  logic        parser_out_valid;
  logic [7:0]  parser_msg_type;
  logic [15:0] parser_price;
  logic [15:0] parser_size;

  // trading_logic → (logged as decision_*)
  logic        logic_out_valid;
  logic [7:0]  logic_msg_type;
  logic [15:0] logic_price;
  logic [15:0] logic_size;

  // ------------------------------------------------------------------
  // Instantiate Ethernet RX
  // ------------------------------------------------------------------
  eth_rx eth_rx_i (
    .clk        (clk),
    .rst_n      (rst_n),
    .in_valid   (in_valid),
    .in_byte    (in_byte),
    .out_ready  (payload_ready),
    .out_valid  (eth_out_valid),
    .out_byte   (eth_out_byte)
  );

  // ------------------------------------------------------------------
  // Instantiate Parser FSM
  // ------------------------------------------------------------------
  parser parser_i (
    .clk        (clk),
    .rst_n      (rst_n),
    .in_valid   (eth_out_valid),
    .in_byte    (eth_out_byte),
    .out_ready  ( /* unused: always ready in this TB */ 1'b1 ),
    .out_valid  (parser_out_valid),
    .msg_type   (parser_msg_type),
    .price      (parser_price),
    .size       (parser_size)
  );

  // ------------------------------------------------------------------
  // Instantiate Trading Logic
  // ------------------------------------------------------------------
  trading_logic logic_i (
    .clk        (clk),
    .rst_n      (rst_n),
    .in_valid   (parser_out_valid),
    .msg_type   (parser_msg_type),
    .price      (parser_price),
    .size       (parser_size),
    .out_valid  (logic_out_valid),
    .out_msg_type(logic_msg_type),
    .out_price  (logic_price),
    .out_size   (logic_size)
  );

  // ------------------------------------------------------------------
  // Tie TB outputs to the final stage
  // ------------------------------------------------------------------
  assign decision_valid     = logic_out_valid;
  assign decision_msg_type  = logic_msg_type;
  assign decision_price     = logic_price;
  assign decision_size      = logic_size;

endmodule
