import socket

while True:
    ADDY = ("127.0.0.1", 1337)
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(ADDY)

        a = input("# ")
        if a == "exit":
            s.close()
            break
        else:
            s.sendall(bytes(a, "UTF-8"))
            print(s.recv(2048).decode())
            s.close