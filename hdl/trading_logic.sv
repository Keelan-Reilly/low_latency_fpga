// hdl/trading_logic.sv
// Simple decision: if TRADE and price < THRESHOLD, issue buy.
module trading_logic #(
    parameter int THRESHOLD = 10000
)(
    input  logic        clk,
    input  logic        rst_n,
    input  logic        field_valid,
    input  logic [7:0]  msg_type,
    input  logic [63:0] order_id,
    input  logic [31:0] price,
    input  logic [31:0] volume,
    output logic        decision_valid,
    output logic [7:0]  decision_type,  // 'B' = buy
    output logic [63:0] d_order_id,
    output logic [31:0] d_price,
    output logic [31:0] d_volume
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            decision_valid <= 0;
        end else begin
            decision_valid <= 0;
            if (field_valid && msg_type == 8'h54 && price < THRESHOLD) begin
                decision_valid   <= 1;
                decision_type    <= "B";
                d_order_id       <= order_id;
                d_price          <= price;
                d_volume         <= volume;
            end
        end
    end

endmodule