#!/usr/bin/python3

import socket

Ports = [21,22,7433]
for i in range(0,3):
    s = socket.socket()
    Port = Ports[i]
    print ('This is the Banner for the Port')
    print (Port)
    s.connect (("192.168.1.2", Port))
    answer = s.recv(224)
    print (answer)
    s.close()
