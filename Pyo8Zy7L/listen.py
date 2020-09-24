import socket, os

ADDY = ("127.0.0.1", 1337)


with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind(ADDY)
    s.listen(4)
    

    while True:
        conn, addr = s.accept()
        data = conn.recv(2048).decode()
        print("connected by %s on port %d" % addr)

        if data == 'close':
            conn.sendall(b"Connection closed")
            s.close()
            break
        else:
            print(data)
            response = input("# ")
            conn.sendall(bytes(response, "UTF-8"))