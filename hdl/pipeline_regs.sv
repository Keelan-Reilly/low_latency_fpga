// hdl/pipeline_regs.sv
// Pipeline registers between stages and timestamp tagging.
module pipeline_regs (
    input  logic        clk,
    input  logic        rst_n,
    // RX→Parser
    input  logic [7:0]  rx2p_in,
    input  logic        rx2p_valid,
    output logic        rx2p_ready,
    output logic [7:0]  rx2p_out,
    output logic        rx2p_out_valid,

    // Parser→Logic
    input  logic [7:0]  p2l_type,
    input  logic        p2l_valid,
    output logic        p2l_ready,
    output logic [7:0]  p2l_type_out,
    output logic [63:0] p2l_order_id,
    output logic [31:0] p2l_price,
    output logic [31:0] p2l_volume,
    output logic        p2l_out_valid,

    // Logic→TX
    input  logic [7:0]  l2t_type,
    input  logic        l2t_valid,
    input  logic [63:0] l2t_order_id,
    input  logic [31:0] l2t_price,
    input  logic [31:0] l2t_volume,
    output logic        l2t_ready,
    output logic [7:0]  l2t_type_out,
    output logic [31:0] l2t_data,
    output logic        l2t_out_valid,

    // Timestamps
    input  logic [31:0] cycle_cnt,
    output logic [31:0] t_ingress,
    output logic [31:0] t_decision
);

    // RX→Parser regs
    logic [7:0]  rx2p_reg;
    logic        rx2p_reg_valid;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rx2p_reg_valid <= 0;
        end else if (rx2p_valid && !rx2p_reg_valid) begin
            rx2p_reg       <= rx2p_in;
            rx2p_reg_valid <= 1;
            t_ingress      <= cycle_cnt;
        end else if (rx2p_ready) begin
            rx2p_reg_valid <= 0;
        end
    end
    assign rx2p_out       = rx2p_reg;
    assign rx2p_out_valid = rx2p_reg_valid;
    assign rx2p_ready     = !rx2p_reg_valid;

    // Parser→Logic regs
    logic [7:0]  p2l_type_r;
    logic [63:0] p2l_order_id_r;
    logic [31:0] p2l_price_r, p2l_volume_r;
    logic        p2l_reg_valid;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            p2l_reg_valid <= 0;
        else if (p2l_valid && !p2l_reg_valid) begin
            p2l_type_r      <= p2l_type;
            p2l_order_id_r  <= order_id;
            p2l_price_r     <= price;
            p2l_volume_r    <= volume;
            p2l_reg_valid   <= 1;
        end else if (p2l_ready) begin
            p2l_reg_valid <= 0;
        end
    end
    assign p2l_type_out   = p2l_type_r;
    assign p2l_order_id   = p2l_order_id_r;
    assign p2l_price      = p2l_price_r;
    assign p2l_volume     = p2l_volume_r;
    assign p2l_out_valid  = p2l_reg_valid;
    assign p2l_ready      = !p2l_reg_valid;

    // Logic→TX regs
    logic [7:0]  l2t_type_r;
    logic [31:0] l2t_data_r;
    logic        l2t_reg_valid;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            l2t_reg_valid <= 0;
        else if (l2t_valid && !l2t_reg_valid) begin
            l2t_type_r      <= l2t_type;
            l2t_data_r      <= l2t_price; // pack as needed
            l2t_reg_valid   <= 1;
            t_decision      <= cycle_cnt;
        end else if (l2t_ready) begin
            l2t_reg_valid <= 0;
        end
    end
    assign l2t_type_out  = l2t_type_r;
    assign l2t_data      = l2t_data_r;
    assign l2t_out_valid = l2t_reg_valid;
    assign l2t_ready     = !l2t_reg_valid;

endmodule