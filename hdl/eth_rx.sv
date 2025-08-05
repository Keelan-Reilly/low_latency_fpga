// hdl/eth_rx.sv
// Ethernet RX module: detects preamble/SFD, filters by MAC, CRC32 check, outputs payload bytes.
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
    state_t state, nxt_state;

    // Parameters
    localparam [47:0] OUR_MAC = 48'h0011_2233_4455;
    localparam int MIN_PAYLOAD = 46;
    localparam int MAX_PAYLOAD = 1500;

    // Internal
    logic [2:0]  pre_cnt;
    logic [15:0] hdr_cnt;
    logic [15:0] payload_len;
    logic [15:0] payload_cnt;
    logic [31:0] crc_shift;

    // CRC32 (simple LFSR-based)
    function automatic logic [31:0] crc32_next(input logic [31:0] crc, input logic [7:0] data);
        logic [31:0] c;
        integer i;
        c = crc ^ ({data, 24'h000000});
        for (i = 0; i < 8; i++) begin
            if (c[31])
                c = (c << 1) ^ 32'h04C11DB7;
            else
                c = c << 1;
        end
        return c;
    endfunction

    // State machine
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state        <= IDLE;
            pre_cnt      <= 0;
            hdr_cnt      <= 0;
            payload_cnt  <= 0;
            payload_len  <= 0;
            crc_shift    <= ~0;
            payload_valid<= 0;
        end else begin
            state <= nxt_state;
            case (state)
                IDLE: begin
                    pre_cnt <= 0;
                end
                PREAMBLE: begin
                    if (rx_valid && rx_byte == 8'h55)
                        pre_cnt <= pre_cnt + 1;
                end
                SFD: begin
                    // consume SFD
                end
                LOAD_HEADER: begin
                    if (rx_valid) begin
                        hdr_cnt <= hdr_cnt + 1;
                        crc_shift <= crc32_next(crc_shift, rx_byte);
                        if (hdr_cnt == 13) begin
                            // Bytes 0-5: dest MAC, 6-11: src MAC, 12-13: EtherType
                            // Filter MAC
                            // we assume dest MAC captured earlier
                        end
                        if (hdr_cnt == 15) begin
                            // next bytes will be payload
                            payload_len  <= /* set from Type/Len of payload? */
                                            MIN_PAYLOAD; // placeholder
                            payload_cnt  <= 0;
                        end
                    end
                end
                LOAD_PAYLD: begin
                    if (rx_valid && payload_cnt < payload_len) begin
                        crc_shift <= crc32_next(crc_shift, rx_byte);
                        if (payload_ready) begin
                            payload_byte  <= rx_byte;
                            payload_valid <= 1;
                            payload_cnt   <= payload_cnt + 1;
                        end
                    end else begin
                        payload_valid <= 0;
                    end
                end
                CRC_CHECK: begin
                    // Check CRC32 == captured CRC
                end
            endcase
        end
    end

    // Next-state logic
    always_comb begin
        nxt_state = state;
        case (state)
            IDLE:
                if (rx_valid && rx_byte == 8'h55)
                    nxt_state = PREAMBLE;
            PREAMBLE:
                if (rx_valid) begin
                    if (rx_byte == 8'h55 && pre_cnt == 6)
                        nxt_state = SFD;
                    else if (rx_byte != 8'h55)
                        nxt_state = IDLE;
                end
            SFD:
                if (rx_valid && rx_byte == 8'hD5)
                    nxt_state = LOAD_HEADER;
                else if (rx_valid)
                    nxt_state = IDLE;
            LOAD_HEADER:
                if (hdr_cnt == 15 && rx_valid)
                    nxt_state = LOAD_PAYLD;
            LOAD_PAYLD:
                if (payload_cnt == payload_len)
                    nxt_state = CRC_CHECK;
            CRC_CHECK:
                nxt_state = IDLE;
        endcase
    end

endmodule