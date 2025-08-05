#!/usr/bin/env bash
set -euo pipefail

# Go to project root so paths are correct
cd "$(dirname "$0")"/..

# Read all your RTL, synthesize to a generic gate netlist,
# then print out a resource usage summary.
yosys -p "\
  read_verilog hdl/*.sv;         \
  synth_ice40 -top tb_top;       \
  abc -g gate;                   \
  stat                          \
"
