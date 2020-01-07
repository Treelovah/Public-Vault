import socket
import sys
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
try:
    ip = socket.gethostbyname('kryptsec.com')
    print(ip)
except socket.error as err:
    print("socket creation failed with error %s" %(err))
port = 80
try:
    host_ip = socket.gethostbyname('kryptsec.com')
except socket.gaierror:
    print("There was an eror resloving the host")
    sys.exit()

s.connect((host_ip, port))

print("the socket has successfully connected to kryptsec on port == %s:%d" %(host_ip, port))