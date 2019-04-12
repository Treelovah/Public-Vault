#!/usr/bin/env bash

declare -i TOTAL=0
while read X ; do
    TOTAL+=$X
done < <(sed -E s/^0+// math.file)
echo "TOTAL =: $TOTAL"
