// sim/tb_top.sv
// Top-level testbench: drives rx_byte from sample.mem and captures uart_tx outputs.
`timescale 1ns/1ps
module tb_top;
    logic clk, rst_n;
    logic [7:0] rx_byte;
    logic       rx_valid;

    // DUT connections
    logic [7:0] payload_byte;
    logic       payload_valid, payload_ready;
    logic       parser_ready;
    logic [7:0] msg_type;
    logic       field_valid;
    logic [63:0] order_id;
    logic [31:0] price, volume;
    logic       decision_valid;
    logic [7:0] decision_type;
    logic [31:0] decision_data;
    logic       uart_busy, uart_tx;

    // Cycle counter
    logic [31:0] cycle_cnt;

    // Instantiate pipeline_regs, eth_rx, parser, trading_logic, uart_tx
    eth_rx      u_eth(.clk(clk), .rst_n(rst_n),
                      .rx_byte(rx_byte), .rx_valid(rx_valid),
                      .payload_byte(payload_byte),
                      .payload_valid(payload_valid),
                      .payload_ready(payload_ready));
    parser      u_pr(.clk(clk), .rst_n(rst_n),
                      .in_byte(payload_byte), .in_valid(payload_valid), .in_ready(parser_ready),
                      .msg_type(msg_type), .field_valid(field_valid),
                      .order_id(order_id), .price(price), .volume(volume));
    trading_logic u_tl(.clk(clk), .rst_n(rst_n),
                      .field_valid(field_valid), .msg_type(msg_type),
                      .order_id(order_id), .price(price), .volume(volume),
                      .decision_valid(decision_valid), .decision_type(decision_type),
                      .d_order_id(), .d_price(decision_data), .d_volume());
    uart_tx     u_ut(.clk(clk), .rst_n(rst_n),
                      .data_in(decision_data), .data_valid(decision_valid),
                      .tx_line(uart_tx), .busy(uart_busy));

    initial begin
        $dumpfile("vlt_dump.vcd");
        $dumpvars(0, tb_top);
        // Load sample.mem
        $readmemh("../messages/sample.mem", mem);
        rst_n = 0; clk = 0;
        #100 rst_n = 1;
        // Drive bytes
        for (integer i = 0; i < $size(mem); i++) begin
            @(posedge clk);
            rx_valid = 1;
            rx_byte  = mem[i];
        end
        @(posedge clk) rx_valid = 0;
        // Wait some cycles for UART
        repeat(1000) @(posedge clk);
        $finish;
    end

    initial clk = 0;
    always #5 clk = ~clk;  // 100 MHz

    always_ff @(posedge clk) begin
        if (!rst_n) cycle_cnt <= 0;
        else          cycle_cnt <= cycle_cnt + 1;
    end

endmodule