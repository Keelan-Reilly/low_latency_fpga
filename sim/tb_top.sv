// sim/tb_top.sv
`timescale 1ns/1ps

module tb_top;
  // Adjust to match your sample.mem length
  localparam integer MEM_DEPTH = 45;

  // Stimulus memory
  reg [7:0] mem [0:MEM_DEPTH-1];

  // Clock/reset & RX interface
  reg        clk, rst_n;
  reg [7:0]  rx_byte;
  reg        rx_valid;

  // DUT wires
  wire [7:0] payload_byte;
  wire       payload_valid, payload_ready;
  wire       parser_ready;
  wire [7:0] msg_type;
  wire       field_valid;
  wire [63:0] order_id;
  wire [31:0] price, volume;
  wire       decision_valid;
  wire [7:0] decision_type;
  wire [31:0] decision_data;
  wire       uart_busy, uart_tx;

  // Cycle counter (if you still want it)
  logic [31:0] cycle_cnt;

  // File handle for output capture
  integer out_f;

  // Instantiate your pipeline_regs, eth_rx, parser, trading_logic, uart_tx,
  // wiring them up exactly as before.
  eth_rx        u_eth   (.clk(clk),   .rst_n(rst_n),
                         .rx_byte(rx_byte), .rx_valid(rx_valid),
                         .payload_byte(payload_byte),
                         .payload_valid(payload_valid),
                         .payload_ready(payload_ready));
  parser        u_pr    (.clk(clk),   .rst_n(rst_n),
                         .in_byte(payload_byte), .in_valid(payload_valid),
                         .in_ready(parser_ready),
                         .msg_type(msg_type), .field_valid(field_valid),
                         .order_id(order_id), .price(price), .volume(volume));
  trading_logic u_tl    (.clk(clk),   .rst_n(rst_n),
                         .field_valid(field_valid), .msg_type(msg_type),
                         .order_id(order_id), .price(price), .volume(volume),
                         .decision_valid(decision_valid),
                         .decision_type(decision_type),
                         .d_order_id(), .d_price(decision_data),
                         .d_volume());
  uart_tx       u_ut    (.clk(clk),   .rst_n(rst_n),
                         .data_in(decision_data),
                         .data_valid(decision_valid),
                         .tx_line(uart_tx),
                         .busy(uart_busy));

  // Clock gen
  always #5 clk = ~clk;  // 100 MHz

  // Cycle counter
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) cycle_cnt <= 0;
    else        cycle_cnt <= cycle_cnt + 1;
  end

  // Capture uart_tx each tick
  always_ff @(posedge clk) begin
    if (out_f) $fwrite(out_f, "%0b\n", uart_tx);
  end

  initial begin
    // Open output capture
    out_f = $fopen("../sim/output_capture.txt","w");

    // Waveform dump
    $dumpfile("vlt_dump.vcd");
    $dumpvars(0, tb_top);

    // Load stimulus
    $readmemh("../messages/sample.mem", mem);

    // Init
    clk      = 0;
    rst_n    = 0;
    rx_valid = 0;
    rx_byte  = 0;
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Drive bytes
    for (integer i = 0; i < MEM_DEPTH; i++) begin
      @(posedge clk);
      rx_valid = 1;
      rx_byte  = mem[i];
    end

    // Finish drive
    @(posedge clk);
    rx_valid = 0;

    // Let UART run out
    repeat (1000) @(posedge clk);

    $fclose(out_f);
    $finish;
  end

endmodule