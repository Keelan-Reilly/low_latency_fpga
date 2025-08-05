// hdl/parser.sv
// ITCH parser: reads length+type, accumulates fields, outputs parsed fields.
module parser (
    input  logic        clk,
    input  logic        rst_n,
    input  logic [7:0]  in_byte,
    input  logic        in_valid,
    output logic        in_ready,
    output logic [7:0]  msg_type,
    output logic        field_valid,
    output logic [63:0] order_id,
    output logic [31:0] price,
    output logic [31:0] volume
);

    typedef enum logic [1:0] {WAIT_HEADER, READ_FIELDS, DISPATCH, SKIP} state_t;
    state_t state, nxt_state;

    logic [15:0] length;
    logic [15:0] cnt;
    logic [7:0]  len_hi, len_lo;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state       <= WAIT_HEADER;
            len_hi      <= 0;
            len_lo      <= 0;
            length      <= 0;
            cnt         <= 0;
            field_valid <= 0;
        end else begin
            state <= nxt_state;
            case (state)
                WAIT_HEADER: begin
                    field_valid <= 0;
                    if (in_valid) begin
                        if (cnt == 0)
                            len_hi <= in_byte;
                        else if (cnt == 1)
                            len_lo <= in_byte;
                        else if (cnt == 2) begin
                            msg_type <= in_byte;
                        end
                        cnt <= cnt + 1;
                        if (cnt == 2)
                            length <= {len_hi, len_lo};
                        if (cnt == 2)
                            cnt <= 0;
                    end
                end
                READ_FIELDS: begin
                    if (in_valid) begin
                        cnt <= cnt + 1;
                        unique case (msg_type)
                            8'h54: begin // 'T'
                                if (cnt < 8)
                                    order_id <= (order_id << 8) | in_byte;
                                else if (cnt < 12)
                                    price <= (price << 8) | in_byte;
                                else if (cnt < 16)
                                    volume <= (volume << 8) | in_byte;
                            end
                        endcase
                        if (cnt + 3 == length)
                            cnt <= 0;
                    end
                end
                DISPATCH: begin
                    field_valid <= 1;
                end
                SKIP: begin
                    if (in_valid && cnt + 3 < length)
                        cnt <= cnt + 1;
                end
            endcase
        end
    end

    always_comb begin
        in_ready = (state != READ_FIELDS) || (cnt < length - 3);
        nxt_state = state;
        case (state)
            WAIT_HEADER:
                if (cnt == 0 && in_valid)
                    nxt_state = WAIT_HEADER;
                else if (cnt == 2 && in_valid)
                    nxt_state = (in_byte == 8'h54) ? READ_FIELDS : SKIP;
            READ_FIELDS:
                if (cnt + 3 == length)
                    nxt_state = DISPATCH;
            DISPATCH:
                    nxt_state = WAIT_HEADER;
            SKIP:
                if (cnt + 3 == length)
                    nxt_state = WAIT_HEADER;
        endcase
    end

endmodule