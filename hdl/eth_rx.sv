`timescale 1ns/1ps

module eth_rx (
    input  logic        clk,
    input  logic        rst_n,
    input  logic [7:0]  rx_byte,
    input  logic        rx_valid,
    output logic [7:0]  payload_byte,
    output logic        payload_valid,
    input  logic        payload_ready
);

    typedef enum logic [2:0] {
        IDLE,
        PREAMBLE,
        SFD,
        LOAD_HEADER,
        LOAD_PAYLD,
        CRC_CHECK
    } state_t;
    state_t state;

    // parameters
    localparam logic [47:0] OUR_MAC = 48'h00_11_22_33_44_55;
    localparam logic[47:0] MAC_BROADCAST = 48'hFF_FF_FF_FF_FF_FF;

    // CRC function protoype (polynomial 0x04C11DB7)
    function automatic logic [31:0] crc32_next(
        input logic [31:0] crc_in,
        input logic [7:0]  data_byte
    );
        logic [31:0] crc;
        crc = crc_in ^ (logic'(data_byte) << 24);
        for (int i = 0; i < 8; i++) begin
            if (crc[31])
                crc = (crc << 1) ^ 32'h04C11DB7;
            else
                crc = crc << 1;
        end
        return crc;
    endfunction

    // internal registers
    logic [2:0]   pre_cnt;
    logic [3:0]   crc_cnt;
    logic [7:0]   len_hi, len_lo;
    logic [15:0]  payload_len;
    logic [15:0]  payload_cnt;
    logic [15:0]  hdr_cnt;
    logic [47:0]  dest_mac_shift;
    logic         mac_match;
    logic [31:0] crc_reg;           // your running CRC
    logic [31:0] crc_recv_shift;    // shift in the 4 received bytes


    // Main FSM
    always_ff @(posedge clk or negedge rst_n) begin
        if (state == PREAMBLE && rx_valid && rx_byte == 8'h55) begin
            $display("%0t: eth_rx PREAMBLE saw #%0d 0x55", $time, pre_cnt+1);
        end
        if (state == SFD && rx_valid) begin
            $display("%0t: eth_rx ENTERED SFD on byte %02h", $time, rx_byte);
        end

        if (!rst_n) begin
            state         <= IDLE;
            pre_cnt       <= 0;
            hdr_cnt       <= 0;
            payload_cnt   <= 0;
            payload_len   <= 0;
            mac_match     <= 0;
            payload_valid <= 0;
            crc_cnt       <= 0;
            dest_mac_shift  <= 0;
            crc_reg         <= 32'hFFFF_FFFF;  // CRC init
            crc_recv_shift  <= 0;
        end else begin
            case (state)
                IDLE: begin
                    payload_valid <= 0;
                    if (rx_valid && rx_byte == 8'h55) begin
                        state   <= PREAMBLE;
                        pre_cnt <= 1;
                    end
                end

                PREAMBLE: begin
                    if (rx_valid) begin
                        if (rx_byte == 8'h55) begin
                            pre_cnt <= pre_cnt + 1;
                            if (pre_cnt == 6) begin
                                $display("%0t: eth_rx ENTER SFD", $time);
                                state <= SFD;
                            end
                        end else begin
                            state   <= IDLE;
                            pre_cnt <= 0;
                        end
                    end
                end

                SFD: begin
                    if (rx_valid) begin
                        if (rx_byte == 8'hD5) begin
                            $display("%0t: eth_rx SFD detected", $time);
                            state     <= LOAD_HEADER;
                            hdr_cnt   <= 0;
                            dest_mac_shift <= 0;
                            mac_match <= 0;
                            crc_reg   <= 32'hFFFF_FFFF;  // reset CRC
                            crc_recv_shift <= 0;
                        end else begin
                            state   <= IDLE;
                        end
                    end
                end

                LOAD_HEADER: begin
                    if (rx_valid) begin
                        crc_reg <= crc32_next(crc_reg, rx_byte);
                        $display("%0t: eth_rx HDR[%0d]=%02h", $time, hdr_cnt, rx_byte);
                        hdr_cnt <= hdr_cnt + 1;
                        // Shift in the destination MAC address
                        if (hdr_cnt < 6) begin
                            logic [47:0] full_dest = { dest_mac_shift[39:0], rx_byte };
                            dest_mac_shift <= full_dest;
                            if (hdr_cnt == 5) begin
                                mac_match <= (full_dest == OUR_MAC) ||
                                            (full_dest == MAC_BROADCAST);
                                $display("%0t: eth_rx MAC match=%b", $time, mac_match);
                            end
                        end

                        if (hdr_cnt == 13) begin
                            // After src MAC(6) + dst MAC(6) + EtherType(2)
                            state       <= LOAD_PAYLD;
                            payload_cnt <= 0;
                        end
                    end
                end


                LOAD_PAYLD: begin
                    if (rx_valid) begin
                        crc_reg <= crc32_next(crc_reg, rx_byte);
                        $display("%0t: eth_rx PAYLD[%0d]=%02h", $time, payload_cnt, rx_byte);
                        // Length bytes
                        if (payload_cnt == 0)
                            len_hi <= rx_byte;
                        else if (payload_cnt == 1) begin
                            len_lo      <= rx_byte;
                            payload_len <= {len_hi, len_lo}; // length
                            $display("%0t: eth_rx PAYLD len=%0d", $time, {len_hi});
                        end
                        // Emit payload
                        if (payload_ready && mac_match) begin
                            payload_byte  <= rx_byte;
                            payload_valid <= 1;
                        end
                        // Transition to CRC once we've sent all bytes
                        payload_cnt   <= payload_cnt + 1;
                        if (payload_cnt + 1 == payload_len) begin
                            state   <= CRC_CHECK;
                            crc_cnt <= 0;
                        end
                    end
                end

                CRC_CHECK: begin
                    if (rx_valid) begin
                        // shift in the received FCS byte
                        crc_recv_shift <= { crc_recv_shift[23:0], rx_byte };
                        crc_cnt <= crc_cnt + 1;

                        // once you’ve seen all 4 FCS bytes, compare
                        if (crc_cnt == 3) begin
                            if (crc_recv_shift == crc_reg) begin
                            $display("%0t: eht_rx CRC OK, frame accepted", $time);
                            end else begin
                            $display("%0t: eth_rx CRC ERROR, frame dropped", $time);
                            end
                            state     <= IDLE;
                            pre_cnt   <= 0;
                            payload_valid <= 0;
                        end
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule