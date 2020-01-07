import requests
import hashlib
s = requests.session()
url = 'http://docker.hackthebox.eu:33260'
r = s.get(url)
cookie = s.cookies.get_dict() 
x = r.text[167:187]
a = hashlib.md5(x.encode('utf-8')).hexdigest()
print(a)
b = s.post(url, data={'hash': a}, cookies=cookie)
print(b.text)

