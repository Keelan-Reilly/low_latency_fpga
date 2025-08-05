# tools/run_sim.sh
#!/usr/bin/env bash
set -e

# Generate Verilator simulation
verilator --cc --exe --build \
    -CFLAGS "-std=c++17" \
    -Wno-unused \
    ../hdl/*.sv main.cpp \
    -o sim_vlt

# Run simulation
./sim_vlt
echo "Simulation complete. Output in sim/output_capture.txt, waveforms in vlt_dump.vcd."