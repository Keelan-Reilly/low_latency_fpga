#!/usr/bin/env python3
"""
Reference parser for Ethernet-encapsulated ITCH messages.
Reads a binary file of raw Ethernet frames (with 7x0x55+0xD5 preamble, headers, payload, CRC). Strips framing and CRC, then parses ITCH messages:
  - 2-byte big-endian length
  - 1-byte type
  - payload fields (OrderID, Price, Volume)

Usage:
  python3 reference_parser.py <binary_file>
"""
import sys
import struct

def parse_frames(data):
    ETH_PREAMBLE = b'\x55' * 7 + b'\xD5'
    i = 0
    n = len(data)
    while True:
        # Find next preamble
        idx = data.find(ETH_PREAMBLE, i)
        if idx == -1:
            break
        # Move pointer to end of preamble
        j = idx + len(ETH_PREAMBLE)
        # Ensure we have enough for MAC(6)+MAC(6)+Type(2)
        if j + 14 > n:
            break
        # Skip destination MAC (6), source MAC (6), EtherType (2)
        j += 14
        # Ensure we can read ITCH header
        if j + 3 > n:
            break
        length, mtype = struct.unpack('>HB', data[j:j+3])
        j += 3
        # Ensure full ITCH payload is present
        if j + length > n:
            break
        payload = data[j:j+length]
        j += length
        # Skip Frame Check Sequence (CRC32)
        j += 4
        # Handle ITCH Trade messages
        if mtype == ord('T'):
            if len(payload) >= 16:
                order_id, price, volume = struct.unpack('>QII', payload[:16])
                print(f"TRADE order_id={order_id} price={price} volume={volume}")
            else:
                print(f"ERROR: incomplete TRADE payload (expected 16 bytes, got {len(payload)})")
        else:
            # Skip unknown ITCH types
            try:
                tchar = chr(mtype)
            except:
                tchar = f"0x{mtype:02X}"
            print(f"SKIP type={tchar} length={length}")
        # Continue after this frame
        i = j

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: reference_parser.py <binary_file>")
        sys.exit(1)
    fname = sys.argv[1]
    with open(fname, 'rb') as f:
        data = f.read()
    parse_frames(data)
