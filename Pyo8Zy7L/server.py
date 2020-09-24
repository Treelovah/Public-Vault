import socket

s = socket.socket()

s.bind(('192.168.1.28', 1337))

print(f"Connecting on: {socket.gethostbyname(socket.gethostname())}")

s.listen(1)

print("Waiting for connections")

while True:
    conn, addr = s.accept()
    key = conn.recv(1024).decode()

    if key == 'help':
        print(f'{addr} collected key')
        conn.send(bytes("""\

                Congratulations:
                kss{8kQFhIYtxkhAYblLk5y9}
                """, 'utf-8'))
    else:
        conn.send(bytes("""\
==============================================================
=========== Welcome to annonymous--encryped chat ============
============================================================
""", 'utf-8'))

conn.close()
