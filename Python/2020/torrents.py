#!/bin/python

# Simple script to get torrents from yifi.

import requests, json, argparse

class Scrape:
    def __init__(self):
        pass

    def list_movies(self, page):
        r = requests.get(f"https://yts.mx/api/v2/list_movies.json?page={page}&sort_by=like_count").json()
        i = 0
        while i <= 18:
            print(json.dumps(r['data']['movies'][i]['title_long'], indent=2))
            i += 1

    def list_movies_torrents(self, page):
        r = requests.get(f"https://yts.mx/api/v2/list_movies.json?page={page}&sort_by=like_count").json()
        i = 0
        while i <= 18:
            movie_hash = json.dumps(r['data']['movies'][i]['torrents'][0]['hash'], indent=2)
            movie_mag = f"magnet:?xt=urn:btih:{movie_hash}&dn=Url+Encoded+Movie+Name&tr=http://track.one:1234/announce&tr=udp://track.two:80"
            print(movie_mag)
            i += 1
    
    def search_movies_torrents(self, movie_name):
        r = requests.get(f"https://yts.mx/api/v2/list_movies.json?query_term={movie_name}").json()
        i = 0
        while i <= 20:
            try:
                movie_hash = json.dumps(r['data']['movies'][i]['torrents'][0]['hash'], indent=2)
                movie_mag = f"magnet:?xt=urn:btih:{movie_hash}&dn=Url+Encoded+Movie+Name&tr=http://track.one:1234/announce&tr=udp://track.two:80"
                print(movie_mag)
                i += 1
            except:
                break

    def search_movies(self, movie_name):
        r = requests.get(f"https://yts.mx/api/v2/list_movies.json?query_term={movie_name}").json()
        i = 0
        while i <= 20:
            try:
                print(json.dumps(r['data']['movies'][i]['title_long'], indent=2))
                i += 1
            except:
                break


        
# Assigning cli args cuz lazy.
parser = argparse.ArgumentParser()
parser.add_argument("-p", "--page", type=int, help="select page to display")
parser.add_argument("-s", "--search", type=str, help="search torrent sites for movie title")
parser.add_argument("-m", "--magnet", action="store_true", help="displays magnet link of movies")
args = parser.parse_args()

if args.search:
    Scrape().search_movies(args.search)
if args.page:
    Scrape().list_movies(args.page)
if args.magnet:
    if args.page:
        Scrape().list_movies_torrents(args.page)
    elif args.search:
        Scrape().search_movies_torrents(args.search)
