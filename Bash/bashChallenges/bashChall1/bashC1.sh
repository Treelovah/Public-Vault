#!/usr/bin/env bash

declare -i TOTAL=0
while read X ; do
    TOTAL+=$X
done < math.file
echo "The Total is: $TOTAL"
