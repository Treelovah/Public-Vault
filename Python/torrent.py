import requests
import json
import os
r = requests.get(
    'https://yts.lt/api/v2/list_movies.json?sort_by=like_count&page=10').json()


class Torrents:
    def __init__(self, iterations):
        try:
            self.name = json.dumps(
                r['data']['movies'][iterations]['title_long'], indent=4)
            self.hash = json.dumps(
                r['data']['movies'][iterations]['torrents'][0]['hash'], indent=4).replace('"', '')
            self.magnet = f"magnet:?xt=urn:btih:{self.hash}&dn=Url+Encoded+Movie+Name&tr=http://track.one:1234/announce&tr=udp://track.two:80"
        except KeyError:
            print(f"{self.name}'torrent' parameter not set")
        except TypeError:
            print(f"{self.name} torrent hash is not available")
            pass
    
    def movie_name(self):
        i = 0
        while i <= 18:
            try:
                print(self.name)
                i += 1
            except:
                i += 1
                pass



Torrents()
