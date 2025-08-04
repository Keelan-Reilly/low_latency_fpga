
// ============================================================
// File: uart_tx.sv
// Basic UART TX: start bit, 8 data bits, stop bit
// ============================================================

module uart_tx #(
  parameter BAUD_DIV = 16'd10416 // for 100MHz / 9600 baud
)(
  input  logic        clk,
  input  logic        rst_n,
  input  logic [7:0]  data_in,
  input  logic        data_valid,
  output logic        data_ready,
  output logic        tx_line
);
  typedef enum logic [2:0] {IDLE, START, DATA, STOP} state_t;
  state_t state, next_state;

  logic [15:0] baud_cnt;
  logic [2:0]  bit_idx;
  logic [7:0]  shift_reg;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state <= IDLE;
      baud_cnt <= 0;
      bit_idx <= 0;
      tx_line <= 1;
    end else begin
      state <= next_state;
      if (baud_cnt == BAUD_DIV-1) baud_cnt <= 0;
      else baud_cnt <= baud_cnt + 1;
      if (state == IDLE && data_valid) shift_reg <= data_in;
      else if (state == DATA && baud_cnt == BAUD_DIV-1) shift_reg <= {1'b0, shift_reg[7:1]};
      if (state == STOP && baud_cnt == BAUD_DIV-1) tx_line <= 1;
    end
  end

  always_comb begin
    next_state = state;
    data_ready = 0;
    case (state)
      IDLE: begin
        tx_line = 1;
        data_ready = 1;
        if (data_valid) next_state = START;
      end
      START: begin
        tx_line = 0;
        if (baud_cnt == BAUD_DIV-1) next_state = DATA;
      end
      DATA: begin
        tx_line = shift_reg[0];
        if (baud_cnt == BAUD_DIV-1 && bit_idx == 7) next_state = STOP;
        else if (baud_cnt == BAUD_DIV-1) bit_idx = bit_idx + 1;
      end
      STOP: begin
        tx_line = 1;
        if (baud_cnt == BAUD_DIV-1) begin
          next_state = IDLE;
          bit_idx = 0;
        end
      end
    endcase
  end
endmodule