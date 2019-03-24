#!/usr/bin/env bash

# This is my first go at vim in bash lets have some fun!!

# ps ((I Love the coloring schemes :drool: ))

if [ $# -lt 1 ] ; then
read -p "Enter a name: "
name=$REPLY
else
name=$1
fi
echo "Hello $name"
exit 0
