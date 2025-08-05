#!/usr/bin/env python3
"""
compare_outputs.py
Compares the reference-parser output against the Verilog sim’s output_capture.txt.
Usage: python bench/compare_outputs.py bench/ref_output.txt sim/output_capture.txt
"""

import sys

def load_lines(path):
    return [ln.strip() for ln in open(path) if ln.strip()]

def main():
    if len(sys.argv) != 3:
        print("Usage: python bench/compare_outputs.py <ref.txt> <sim.txt>")
        sys.exit(1)

    ref = load_lines(sys.argv[1])
    sim = load_lines(sys.argv[2])
    N   = max(len(ref), len(sim))
    ok  = True

    for i in range(N):
        r = ref[i] if i < len(ref) else "<no ref line>"
        s = sim[i] if i < len(sim) else "<no sim line>"
        if r != s:
            print(f"Line {i+1} mismatch:\n  REF: {r}\n  SIM: {s}\n")
            ok = False

    if ok:
        print("Outputs match exactly.")
    else:
        print("Differences found.")

if __name__ == '__main__':
    main()
