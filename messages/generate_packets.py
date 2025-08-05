# messages/generate_packets.py
#!/usr/bin/env python3
"""
Generates Ethernet frames with ITCH payload and writes to a binary file.
"""
import struct

ETH_PREAMBLE = b'\x55' * 7 + b'\xD5'
DEST_MAC     = b'\xFF\xFF\xFF\xFF\xFF\xFF'
SRC_MAC      = b'\x00\x11\x22\x33\x44\x55'
ETH_TYPE     = b'\x08\x00'  # IPv4

def make_itch_trade(order_id, price, volume):
    payload = struct.pack('>HBQII',
                          16,               # length = 16 bytes of fields
                          ord('T'),         # type 'T'
                          order_id,
                          price,
                          volume)
    return payload

def crc32(data):
    import zlib
    return struct.pack('>I', zlib.crc32(data) & 0xFFFFFFFF)

if __name__ == "__main__":
    frames = []
    # Example trade
    payload = make_itch_trade(1, 10000, 1000)
    frame = ETH_PREAMBLE + DEST_MAC + SRC_MAC + ETH_TYPE + payload
    frame += crc32(frame[7:])  # compute CRC over everything after preamble
    frames.append(frame)

    with open('packets.bin', 'wb') as f:
        for fr in frames:
            f.write(fr)
    print("Wrote packets.bin")