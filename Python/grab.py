#!/usr/bin/python3

import socket

Ports = [21,7433]
for i in range(0,2):
    s = socket.socket()
    Port = Ports[i]
    print ('This is the Banner for the Port')
    print (Port)
    s.connect (("192.168.1.10", Port))
    answer = s.recv(1024)
    print (answer)
    s.close()
