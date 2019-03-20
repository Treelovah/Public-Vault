#! /bin/bash

nmap -sT 192.168.1.0/24 -p 80 >/dev/null -oG mysqlscan

cat mysqlscan | grep "open" > mysqlscan2

cat mysqlscan2
