#!/usr/bin/env bash
FILE1="/usr/local/sbin/system_update.sh"
FILE2="/home/$USER/openvpn.sh"
[ -f "$FILE1" ] || echo "wget https://www.kryptsec.com/Downloads/system_update.sh"
[ -f "$FILE2" ] || echo "wget https://www.kryptsec.com/Downloads/openvpn.sh"
#chmod 755 system_update.sh openvpn.sh
#sudo mv system_update.sh /usr/local/sbin/
#openvpn.sh
#rm openvpn.sh
#system_update.sh
