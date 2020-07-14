#!/usr/bin/env bash

# update
sudo apt update -y;
#install apache2
sudo apt install apache2 -y;
#install mysql
sudo apt install mysql-server -y;
#setup mysql
sudo mysql_secure_installation;
#install php
sudo apt install php libapache2-mod-php php-mysql -y;
read -ep "Would you like to create vhost now or later? (n/l): "user_reply;
if [ $user_reply = "n" ]
then
    read -p "Enter the full path for your domain. (/var/www/your_domain): "domain;
elif [ $user_reply = "l" ]
    ;
else
    exit 127
    #finish this sometime.
fi