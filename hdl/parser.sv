// ============================================================
// File: parser.sv
// ITCH-style parser FSM: length, type, field extraction
// ============================================================

module parser #(
  parameter PRICE_THRESHOLD = 32'd100000 // example threshold
)(
  input  logic        clk,
  input  logic        rst_n,
  input  logic [7:0]  in_byte,
  input  logic        in_valid,
  output logic        in_ready,

  output logic [7:0]  msg_type,
  output logic        msg_valid,
  output logic [63:0] order_id,
  output logic [31:0] price,
  output logic [31:0] size
);
  typedef enum logic [1:0] {WAIT_LEN, WAIT_TYPE, READ_PAYLD, DISPATCH} state_t;
  state_t state, next_state;

  logic [15:0] msg_len;
  logic [15:0] cnt;
  logic [7:0]  header_type;
  logic [7:0]  byte_buf;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state <= WAIT_LEN;
      msg_len <= 0; cnt <= 0;
    end else begin
      state <= next_state;
      if (in_valid && in_ready) begin
        case (state)
          WAIT_LEN: begin
            msg_len <= {msg_len[7:0], in_byte};
          end
          WAIT_TYPE: header_type <= in_byte;
          READ_PAYLD: begin
            case (cnt)
              0: order_id[63:56] <= in_byte;
              1: order_id[55:48] <= in_byte;
              2: order_id[47:40] <= in_byte;
              3: order_id[39:32] <= in_byte;
              4: order_id[31:24] <= in_byte;
              5: order_id[23:16] <= in_byte;
              6: order_id[15:8]  <= in_byte;
              7: order_id[7:0]   <= in_byte;
              8: price[31:24]    <= in_byte;
              9: price[23:16]    <= in_byte;
              10: price[15:8]    <= in_byte;
              11: price[7:0]     <= in_byte;
              12: size[31:24]    <= in_byte;
              13: size[23:16]    <= in_byte;
              14: size[15:8]     <= in_byte;
              15: size[7:0]      <= in_byte;
            endcase
            cnt <= cnt + 1;
          end
        endcase
      end
    end
  end

  always_comb begin
    next_state = state;
    in_ready = 0;
    msg_valid = 0;
    msg_type = header_type;
    case (state)
      WAIT_LEN: begin
        in_ready = 1;
        if (in_valid) next_state = WAIT_TYPE;
      end
      WAIT_TYPE: begin
        in_ready = 1;
        if (in_valid) begin
          next_state = READ_PAYLD;
          cnt = 0;
        end
      end
      READ_PAYLD: begin
        in_ready = 1;
        if (in_valid && cnt == msg_len-3) next_state = DISPATCH;
      end
      DISPATCH: begin
        msg_valid = 1;
        next_state = WAIT_LEN;
      end
    endcase
  end
endmodule