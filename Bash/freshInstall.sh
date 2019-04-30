#!/usr/bin/env bash

wget https://www.kryptsec.com/Downloads/system_update.sh
wget https://www.kryptsec.com/Downloads/openvpn.sh
chmod 755 system_update.sh openvpn.sh
sudo mv system_update.sh /usr/local/sbin/
openvpn.sh
rm openvpn.sh
system_update.sh
