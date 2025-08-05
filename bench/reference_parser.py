# bench/reference_parser.py
#!/usr/bin/env python3
"""
Reference parser for ITCH messages.
Reads a binary stream of ITCH messages:
  - 2-byte big-endian length
  - 1-byte message type
  - payload
Prints parsed TRADE messages as:
  TRADE order_id=<id> price=<price> volume=<volume>
Ignores other message types.
"""
import struct
import sys

def parse_itch(stream):
    while True:
        header = stream.read(3)
        if len(header) < 3:
            break
        length, mtype = struct.unpack('>HB', header)
        payload = stream.read(length)
        if len(payload) < length:
            break
        if mtype == ord('T'):  # Trade message
            order_id, price, volume = struct.unpack('>QII', payload[:16])
            print(f"TRADE order_id={order_id} price={price} volume={volume}")
        else:
            # Skip unknown types
            print(f"SKIP type={chr(mtype)} length={length}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: reference_parser.py <binary_file>")
        sys.exit(1)
    with open(sys.argv[1], 'rb') as f:
        parse_itch(f)