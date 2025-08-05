#!/usr/bin/env python3
"""
generate_packets.py
Generates a synthetic Ethernet frame .mem file with simple ITCH-style messages.
Each line in the output .mem is one byte in hex (no “0x” prefix).
"""

import struct
import argparse

def build_frame(payload_bytes, dest_mac, src_mac, eth_type=0x0800):
    # 7×0x55 preamble + 0xD5 SFD
    preamble = bytes([0x55]*7 + [0xD5])
    frame = preamble
    # MAC addresses
    frame += bytes.fromhex(dest_mac.replace(':',''))
    frame += bytes.fromhex(src_mac.replace(':',''))
    # Ethertype
    frame += struct.pack('!H', eth_type)
    # Payload
    frame += payload_bytes
    # Pad so that (dest MAC…payload) ≥ 60 bytes (excluding FCS)
    min_len = 6+6+2+len(payload_bytes)
    if min_len < 60:
        frame += bytes(60 - min_len)
    return frame

def build_message(msg_type, price, size):
    # 1 byte type, 2 bytes price, 2 bytes size
    return struct.pack('!BHH', msg_type, price, size)

def main():
    p = argparse.ArgumentParser()
    p.add_argument('--out', default='messages/sample.mem',
                   help='Path to write .mem file')
    p.add_argument('--count', type=int, default=10,
                   help='Number of messages to generate')
    args = p.parse_args()

    dest_mac = 'de:ad:be:ef:00:01'
    src_mac  = 'ca:fe:ba:be:00:02'

    payload = bytearray()
    for i in range(args.count):
        msg_type = 1 if (i % 2 == 0) else 2
        price    = 100 + i
        size     = 10 + 2*i
        payload += build_message(msg_type, price, size)

    frame = build_frame(payload, dest_mac, src_mac)
    with open(args.out, 'w') as f:
        for b in frame:
            f.write(f'{b:02x}\n')

    print(f'Written {len(frame)} bytes to {args.out}')

if __name__ == '__main__':
    main()
