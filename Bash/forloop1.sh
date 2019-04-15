#!/usr/bin/env bash
#structured for loop
for (( i = 1; i < 5; i++ )); do
  URL="https://www.kryptsec.com/"
  printf "\n$i: $URL\n"
done
