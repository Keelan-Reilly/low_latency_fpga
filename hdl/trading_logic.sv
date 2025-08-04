// ============================================================
// File: trading_logic.sv
// Simple buy-if-price-less-than-threshold logic
// ============================================================

module trading_logic #(
  parameter PRICE_THRESHOLD = 32'd100000
)(
  input  logic         clk,
  input  logic         rst_n,
  input  logic [7:0]   msg_type,
  input  logic         msg_valid,
  input  logic [63:0]  order_id,
  input  logic [31:0]  price,
  input  logic [31:0]  size,
  output logic         decision_valid,
  output logic [63:0]  decision_order_id,
  output logic [31:0]  decision_price,
  output logic [31:0]  decision_size
);
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      decision_valid <= 0;
    end else begin
      if (msg_valid && msg_type == 8'h05 /* Trade */ && price < PRICE_THRESHOLD) begin
        decision_valid     <= 1;
        decision_order_id  <= order_id;
        decision_price     <= price;
        decision_size      <= size;
      end else begin
        decision_valid <= 0;
      end
    end
  end
endmodule