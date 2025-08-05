#!/usr/bin/env python3
"""
reference_parser.py
Reads messages/sample.mem, skips preamble+MAC header, parses our toy messages,
and applies a simple trading rule: on msg_type==2 (TRADE) && price < threshold.
Prints “timestamp: TRADE price=… size=…”
"""

import sys

def read_bytes(path):
    with open(path) as f:
        for line in f:
            tok = line.strip()
            if tok:
                yield int(tok, 16)

def main():
    if len(sys.argv) != 2:
        print("Usage: python bench/reference_parser.py messages/sample.mem")
        sys.exit(1)

    mem_path = sys.argv[1]
    it = iter(read_bytes(mem_path))

    # Skip 7×0x55 + 0xD5 SFD
    for _ in range(8):
        next(it)
    # Skip dest MAC (6), src MAC (6), ethertype (2)
    for _ in range(14):
        next(it)

    threshold = 105
    timestamp = 0

    for byte in it:
        msg_type = byte
        price     = (next(it) << 8) | next(it)
        size      = (next(it) << 8) | next(it)
        timestamp += 1

        if msg_type == 2 and price < threshold:
            print(f"{timestamp}: TRADE price={price} size={size}")

if __name__ == '__main__':
    main()
