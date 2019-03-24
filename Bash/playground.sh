#!/usr/bin/env bash
# a good case/switch example for bash
if [[ $# -eq 0  ]]; then
	echo "*** you must use an argument ('-e|-E', '-f|-F') ***"
else
	case $1 in
		-e|-E)
			echo "You chose -e or -E";;
		-f|-F)
			echo "you chose -f or -F";;
		*) ;;
	esac
fi
