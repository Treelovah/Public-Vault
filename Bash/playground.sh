#!/usr/bin/env bash
# a good case/switch example for bash
#Use parameter substitution to provide default value
FILE="my file"
[ -f "$FILE" -a -r "$FILE" ] && cat "$FILE"
