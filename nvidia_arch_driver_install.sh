#!/usr/bin/env bash

echo "Currently installed Drivers:"
sleep 2
function menu() {
	cat <<EOF
==========
|| Menu ||
==========
EOF
	echo $(inxi -G)
	echo "";
	echo "Press 1 to install bumblebee drivers (better for battery life, will use onboard graphics for most stuff)."
	echo "";
	echo "2 to restart now"
	echo "";
	echo "3 to restart later"
}
function query() {
	read -p ">> ";
	case "$REPLY" in

		1) echo "$(sudo mhwd -a pci nonfree 0300)"
			menu;
			query;
			;;
		2) echo "$(reboot)"
			;;
		3) echo "$(exit 1)"
			;;
		*) echo "god damnit i said 1, 2, or 3..now im gonna reboot cuz im confused and scared...."
			menu;
			query;
			;;
	esac
}
menu
query
