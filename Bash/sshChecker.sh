#!/usr/bin/env bash
read -p "Enter host IP: " c
a=`nmap $c -PN -p- | egrep 'open|closed|filtered'`
b=`nmap $c -PN -p- | egrep 'open|closed|filtered'`

echo $a
echo $b
