#!/usr/bin/env python3
"""
Generates Ethernet frames with ITCH payload and writes:
  - packets.bin   (raw bytes)
  - sample.mem    (one hex byte per line for Verilog $readmemh)
"""
import struct
import zlib
import os

ETH_PREAMBLE = b'\x55' * 7 + b'\xD5'
DEST_MAC     = b'\xFF\xFF\xFF\xFF\xFF\xFF'
SRC_MAC      = b'\x00\x11\x22\x33\x44\x55'
ETH_TYPE     = b'\x08\x00'  # IPv4

def make_itch_trade(order_id, price, volume):
    # 2-byte length, 1-byte type, then fields
    return struct.pack('>HBQII',
                       16,               # length of the fields section
                       ord('T'),         # type 'T'
                       order_id,
                       price,
                       volume)

def crc32(data):
    return struct.pack('>I', zlib.crc32(data) & 0xFFFFFFFF)

def build_frame(order_id, price, volume):
    payload = make_itch_trade(order_id, price, volume)
    frame   = ETH_PREAMBLE + DEST_MAC + SRC_MAC + ETH_TYPE + payload
    frame  += crc32(frame[7:])   # CRC over everything after the preamble
    return frame

if __name__ == "__main__":
    # Build one example frame; add more calls to build_frame() if you like
    frames = [ build_frame(order_id=1, price=10000, volume=1000) ]

    # Flatten into a single byte string
    all_bytes = b''.join(frames)

    # Determine this script's directory
    script_dir = os.path.dirname(os.path.realpath(__file__))

    # Write binary file
    bin_path = os.path.join(script_dir, 'packets.bin')
    with open(bin_path, 'wb') as f:
        f.write(all_bytes)
    print(f"Wrote {bin_path}")

    # Write hex-memory file for $readmemh
    mem_path = os.path.join(script_dir, 'sample.mem')
    with open(mem_path, 'w') as m:
        for byte in all_bytes:
            m.write(f"{byte:02X}\n")
    print(f"Wrote {mem_path}")