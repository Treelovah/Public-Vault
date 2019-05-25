#
# The aliens seem to be trying to make direct contact, so it's time
# for us to properly listen.
# Write a server that listens on ('localhost', 10000).
# The flag will be sent to that address
# record signal to /tmp/aliensignallog.txt
#
# If you get an address already in use error then try again in a few
# moments.
#
def debugMsg(msg):
  # Use this function if you need any debug messages
  with open("/tmp/userdebug.log", "a") as myfile:
    myfile.write(msg + "\n")

import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sa = ('localhost', 10000)
s.bind(sa)
s.listen(1)
conn, ca = s.accept()
data = conn.recv(1024)
with open("/tmp/aliensignallog.txt", "w") as target:
  target.write(data + "\n")
