#!/usr/bin/env bash

# I would like this to scan for a (whatever) type of TCP/UDP connections (ex. ssh, https, etc.)
# A white list of IPs would be set by user
# Scan would kill non-whitelisted user connections and log IPs to blacklist
# This blacklist would be saved to $USER/quarantine

#bring it together
CT="ssh"                #input connection type (ssh, http, https,)
SC="fileTest.txt"       #input filename to save SSHConnections (make sure its in your home directory)
AI="analyzedIPs.txt"

[ -e $SC ] && rm "$SC" && echo "$?" || touch "$SC" 
[ -e $AI ] && rm "$AI" && echo "$?" || touch "$AI"

sudo tcpdump -tttt -n -vv | grep 22 | grep -oE '((1?[0-9][0-9]?|2[0-4][0-9]|25[0-5])\.){3}(1?[0-9][0-9]?|2[0-4][0-9]|25[0-5])'
