#!/usr/bin/env bash
echo "A script that will scan for SSH connections.";
sleep 3;
read -p "Enter host IP: " c
a=$(nmap $c -PN -p- | egrep 'open|closed|filtered');
b=$(nmap $c -PN -p- | egrep 'open|closed|filtered');

echo $a;
echo $b;
