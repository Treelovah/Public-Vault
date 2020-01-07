#
# Connect to alien server ('localhost', 10000),
# Then send USER followed by aliensignal,
# Then send PASS followed by unlockserver,
# Next SEND followed by moonbase.
# Then send END and if all followed key will provided.
#
# Note: You must receive data back from the server after you send each message
#


import socket
cs = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
cs.connect(('127.0.0.1', 10000))
cs.send("USER")
print(cs.recv(1024))
cs.send("aliensignal")
print(cs.recv(1024))
cs.send("PASS")
print(cs.recv(1024))
cs.send("unlockserver")
print(cs.recv(1024))
cs.send("SEND")
print(cs.recv(1024))
cs.send("moonbase")
print(cs.recv(1024))
cs.send("END")
print(cs.recv(1024))
