#! /bin/bash
# $* Refers to all arguments
# $0 Refers to current working directory
echo "You are using $(basename $0)"
echo "Hello $*"
exit 0
