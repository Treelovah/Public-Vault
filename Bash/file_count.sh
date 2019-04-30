#!/usr/bin/env bash
file_count() {
   DIR="$1"
   LIST="$(ls "$DIR" | wc -l)"
   echo "${DIR}:"
   echo "$LIST"
}
file_count /etc
file_count /var
file_count /usr/bin
