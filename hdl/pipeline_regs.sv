// ============================================================
// File: pipeline_regs.sv
// Pipeline registers and timestamp tagging
// ============================================================

module pipeline_regs (
  input  logic         clk,
  input  logic         rst_n,
  // stage 1 -> 2
  input  logic [7:0]   s1_byte,
  input  logic         s1_valid,
  output logic         s1_ready,
  output logic [7:0]   s2_byte,
  output logic         s2_valid,
  input  logic         s2_ready,
  // timestamp
  output logic [31:0]  ingress_ts,
  output logic [31:0]  decision_ts
);
  // simple pass-thru register stage
  logic [7:0]   reg_byte;
  logic         reg_valid;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      reg_valid <= 0;
    end else if (s1_valid && s1_ready) begin
      reg_byte  <= s1_byte;
      reg_valid <= 1;
      ingress_ts <= ingress_ts + 1; // simplistic timestamp increment
    end else if (s2_ready) begin
      reg_valid <= 0;
    end
  end

  assign s1_ready = s2_ready;
  assign s2_byte  = reg_byte;
  assign s2_valid = reg_valid;
endmodule