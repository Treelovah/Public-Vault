#!/usr/bin/env bash

count=0
((count++))
echo " External $count"
while [ $count -ne 0 ]
do
    echo "Inside $count.. sleeping 5"
    sleep 5
done &
sleep 10
count = count + ((count++))
echo " External $count"
sleep 20
((count--))
((count--))
wait
