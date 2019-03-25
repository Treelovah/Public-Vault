#!/usr/bin/env bash

# Author: @Treelovah
# Web: https://www.kryptsec.com
# Script to prompt ssh connection
# Last Edited: March 2019

sshStorage="$HOME/ssh"
[ -d $HOME/ssh ] && echo "$sshStorage dir accpeted." || mkdir $HOME/ssh && echo "A new folder $sshStorage has been created by default and is where all future files run by this progam will be stored"
read -p "New ssh? or choose from saved? {'ssh' or 'saved'}: " choice1
