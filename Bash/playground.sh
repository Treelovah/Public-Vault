#!/usr/bin/env bash

# Author : Treelovah @ KryptSec Society
# www.kryptsec.com
# This script prompts to backup files and location
# The files will be searched on $HOME dir and will only backup files to same $HOME dir.
# Last edited March 2019
read -p "Which file types would you like to backup? >>: " file_suffix
read -p "Which directory would you like to backup? >>:" dir_name
# creates a directory if it does not currently exist
test -d $HOME/$dir_name || mkdir -m 700 $HOME/$dir_name
# search criteria ie .sh . The -path, -prune and -o options are to exclude the backdirectory from the backup.
find $HOME -path $HOME/$dir_name -prune -o -name "*$file_suffix" -exec cp {} $HOME/$dir_name/ \;
exit 0
