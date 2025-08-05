#!/usr/bin/env bash
set -euo pipefail

# Move into the script’s directory so relative paths work
cd "$(dirname "$0")"

# Build the simulation (assumes Makefile defines `sim`)
make sim

# Run it, pointing to your sample packet file
./obj_dir/Vtb_top +PACKET_FILE=../messages/sample.mem
