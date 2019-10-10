#!/usr/bin/env bash

#hey you pulled this from https://protonvpn.com/support/linux-vpn-tool/

# dont forget it.
echo "This is not a go get coffee script, I need you babe."
sleep 2
echo "updating first"
sleep 1
sudo pacman -Syyu
sudo pacman -S openvpn python dialog
sudo wget -O protonvpn-cli.sh https://raw.githubusercontent.com/ProtonVPN/protonvpn-cli/master/protonvpn-cli.sh
sudo chmod +x protonvpn-cli.sh
sudo ./protonvpn-cli.sh --install

#initialization
echo "log into your account and look for your 'OpenVPN username and password..not your account username and password...k lets remember our mistakes from last time"
sleep 5
sudo pvpn -init

