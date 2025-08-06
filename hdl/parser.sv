`timescale 1ns/1ps

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
    // Always ready to accept — small FIFO assumed
    assign in_ready = 1;

    // FSM states
    typedef enum logic [1:0] {WAIT_HEADER, READ_FIELDS, DISPATCH, SKIP} state_t;
    state_t state;

    // Header parsing
    logic [15:0] length;
    logic [7:0]  len_hi, len_lo;
    logic [7:0]  type_reg;
    logic [15:0] cnt;

    // Reset and FSM
    always_ff @(posedge clk or negedge rst_n) begin
            // DEBUG: trace every byte in and the state transitions
        if (state == WAIT_HEADER && in_valid) begin
            $display("%0t: parser WAIT_HEADER saw byte %02h (cnt=%0d)", $time, in_byte, cnt);
        end
        if (state == READ_FIELDS && in_valid) begin
            $display("%0t: parser READ_FIELDS saw byte %02h (cnt=%0d)", $time, in_byte, cnt);
        end
        if (state == DISPATCH) begin
            $display("%0t: parser DISPATCH msg_type=%02h order_id=%016h price=%0d volume=%0d", 
                    $time, type_reg, order_id, price, volume);
        end
        if (!rst_n) begin
            state       <= WAIT_HEADER;
            len_hi      <= 0;
            len_lo      <= 0;
            length      <= 0;
            type_reg    <= 0;
            cnt         <= 0;
            field_valid <= 0;
            order_id    <= 0;
            price       <= 0;
            volume      <= 0;
        end else begin
            field_valid <= 0;
            case (state)
                WAIT_HEADER: begin
                    if (in_valid) begin
                        // Byte 0: length high
                        if (cnt == 0) begin
                            len_hi <= in_byte;
                            cnt    <= cnt + 1;
                        end
                        // Byte 1: length low
                        else if (cnt == 1) begin
                            len_lo <= in_byte;
                            cnt    <= cnt + 1;
                        end
                        // Byte 2: message type
                        else if (cnt == 2) begin
                            type_reg <= in_byte;
                            length   <= {len_hi, len_lo};
                            cnt      <= 0;
                            // Move to next state based on type
                            if (in_byte == 8'h54)  // 'T'
                                state <= READ_FIELDS;
                            else
                                state <= SKIP;
                        end
                    end
                end

                READ_FIELDS: begin
                    if (in_valid) begin
                        // Accumulate fields for 'T'
                        if (cnt < 8) begin
                            order_id <= (order_id << 8) | in_byte;
                        end else if (cnt < 12) begin
                            price <= (price << 8) | in_byte;
                        end else if (cnt < 16) begin
                            volume <= (volume << 8) | in_byte;
                        end
                        cnt <= cnt + 1;
                        // If we've read the full payload length, dispatch
                        if (cnt + 1 == length) begin
                            state <= DISPATCH;
                            cnt   <= 0;
                        end
                    end
                end

                DISPATCH: begin
                    // Output parsed fields
                    field_valid <= 1;
                    msg_type    <= type_reg;
                    // Clear for next message
                    state    <= WAIT_HEADER;
                    order_id <= order_id;  // hold values until next cycle
                    price    <= price;
                    volume   <= volume;
                end

                SKIP: begin
                    if (in_valid) begin
                        cnt <= cnt + 1;
                        if (cnt + 1 == length) begin
                            state <= WAIT_HEADER;
                            cnt   <= 0;
                        end
                    end
                end

            endcase
        end
    end

endmodule