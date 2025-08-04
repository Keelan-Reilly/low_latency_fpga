// ============================================================
// File: eth_rx.sv
// Simplified Ethernet RX: preamble/SFD detection, MAC filter, payload streaming
// ============================================================

`timescale 1ns/1ps

module eth_rx #(
  parameter [47:0] DEST_MAC = 48'hDE_AD_BE_EF_01_23
)(
  input  logic        clk,
  input  logic        rst_n,
  input  logic [7:0]  in_byte,
  input  logic        in_valid,
  output logic [7:0]  payload_byte,
  output logic        payload_valid,
  input  logic        payload_ready
);
  // State machine for RX
  typedef enum logic [2:0] {IDLE, PREAMBLE, SFD, HEADER, PAYLOAD} state_t;
  state_t state, next_state;

  logic [3:0] pre_cnt;
  logic [55:0] mac_shift;
  logic [7:0] ethertype_hi, ethertype_lo;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state      <= IDLE;
      pre_cnt    <= 0;
      mac_shift  <= 0;
    end else begin
      state      <= next_state;
      if (state == PREAMBLE && in_valid && in_byte == 8'h55) pre_cnt <= pre_cnt + 1;
      else if (state != PREAMBLE) pre_cnt <= 0;
      if (state == HEADER && in_valid) mac_shift <= {mac_shift[47:0], in_byte};
    end
  end

  always_comb begin
    next_state = state;
    payload_valid = 0;
    payload_byte  = 8'h00;
    case (state)
      IDLE: if (in_valid && in_byte == 8'h55) next_state = PREAMBLE;
      PREAMBLE: if (pre_cnt == 7 && in_valid && in_byte == 8'h55) next_state = SFD;
      SFD: if (in_valid && in_byte == 8'hD5) next_state = HEADER;
      HEADER: begin
        if (in_valid && &mac_shift[47:0] != 1'bx) begin
          // after capturing 6 MAC bytes
          if (mac_shift[47:0] == DEST_MAC) next_state = PAYLOAD;
          else next_state = IDLE;
        end
      end
      PAYLOAD: begin
        if (in_valid) begin
          payload_valid = 1;
          payload_byte  = in_byte;
          if (!payload_ready) next_state = PAYLOAD;
          // no explicit end-of-frame detection; simulation-driven
        end
      end
    endcase
  end
endmodule
