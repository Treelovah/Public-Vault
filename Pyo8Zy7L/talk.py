import socket

serv_name = "kryptsec.com"
ADDY = ("204.48.31.0", 80)

server_ip = socket.gethostbyname(serv_name)
print(server_ip)

r = "GET / HTTP/1.1\nHOST:" + ADDY[0]+"\n\n"

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect(ADDY)
    s.sendall(r.encode())