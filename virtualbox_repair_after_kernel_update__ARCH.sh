#!/usr/bin/env bash

echo "yo! this is not a go get coffee script. Stay here and interact with me"
sleep 3

# reinstalls vbox with extensions using awk, and grep to grab kernel info
pamac install virtualbox $(pacman -Qsq "^linux" | grep "^linux[0-9]*[-rt]*$" | awk '{print $1"-virtualbox-host-modules"}' ORS=' ')
# then reloads
sudo vboxreload
# install the extension pack(optional)
pamac build virtualbox-ext-oracle

