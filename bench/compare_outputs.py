# bench/compare_outputs.py
#!/usr/bin/env python3
"""
Compares the reference output against actual output.
Usage: compare_outputs.py reference.txt actual.txt
Exits with code 1 and prints diff if mismatches found.
"""
import sys
import difflib

def compare(ref_file, actual_file):
    with open(ref_file) as f:
        ref = f.readlines()
    with open(actual_file) as f:
        act = f.readlines()
    diff = list(difflib.unified_diff(ref, act, fromfile='reference', tofile='actual'))
    if diff:
        sys.stdout.writelines(diff)
        sys.exit(1)
    else:
        print("Outputs match.")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: compare_outputs.py <reference.txt> <actual.txt>")
        sys.exit(1)
    compare(sys.argv[1], sys.argv[2])