#!/usr/bin/env bash
# Script to evaluate grades
# Usage: grade.sh student grade
# Author: @theurbanpenguin
# Date: 1/1/1971
if [ ! $# -eq2 ] ; then
	echo "You must provide <student><grade>"
	exit 2
fi