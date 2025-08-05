// hdl/uart_tx.sv
// UART transmitter: serialises 32-bit data word, LSB first.
module uart_tx #(
    parameter int CLK_FREQ_HZ = 100_000_000,
    parameter int BAUD_RATE   = 115200
)(
    input  logic        clk,
    input  logic        rst_n,
    input  logic [31:0] data_in,
    input  logic        data_valid,
    output logic        tx_line,
    output logic        busy
);

    localparam int BIT_CNT_MAX = 1 + 32 + 1; // start + data + stop
    localparam int BAUD_TICKS  = CLK_FREQ_HZ / BAUD_RATE;
    logic [$clog2(BAUD_TICKS)-1:0] tick_cnt;
    logic [$clog2(BIT_CNT_MAX)-1:0] bit_cnt;
    logic [31:0] shift_reg;

    typedef enum logic [1:0] {IDLE, START_BIT, SEND_BITS, STOP_BIT} state_t;
    state_t state, nxt_state;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state     <= IDLE;
            busy      <= 0;
            tx_line   <= 1;
            tick_cnt  <= 0;
            bit_cnt   <= 0;
        end else begin
            state <= nxt_state;
            case (state)
                IDLE: begin
                    busy <= 0;
                    tx_line <= 1;
                    if (data_valid) begin
                        busy      <= 1;
                        shift_reg <= data_in;
                    end
                end
                START_BIT: begin
                    if (tick_cnt == BAUD_TICKS-1) begin
                        tx_line  <= 0;
                        tick_cnt <= 0;
                    end else begin
                        tick_cnt <= tick_cnt + 1;
                    end
                end
                SEND_BITS: begin
                    if (tick_cnt == BAUD_TICKS-1) begin
                        tick_cnt <= 0;
                        tx_line  <= shift_reg[0];
                        shift_reg<= shift_reg >> 1;
                        bit_cnt  <= bit_cnt + 1;
                    end else begin
                        tick_cnt <= tick_cnt + 1;
                    end
                end
                STOP_BIT: begin
                    if (tick_cnt == BAUD_TICKS-1) begin
                        tx_line  <= 1;
                        tick_cnt <= 0;
                    end else begin
                        tick_cnt <= tick_cnt + 1;
                    end
                end
            endcase
        end
    end

    always_comb begin
        nxt_state = state;
        case (state)
            IDLE:
                if (data_valid)
                    nxt_state = START_BIT;
            START_BIT:
                if (tick_cnt == BAUD_TICKS-1)
                    nxt_state = SEND_BITS;
            SEND_BITS:
                if (tick_cnt == BAUD_TICKS-1 && bit_cnt == 32)
                    nxt_state = STOP_BIT;
            STOP_BIT:
                if (tick_cnt == BAUD_TICKS-1)
                    nxt_state = IDLE;
        endcase
    end

endmodule