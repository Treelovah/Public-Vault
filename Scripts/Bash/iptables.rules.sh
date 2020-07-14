#!/bin/bash


### interactive mode ###
flush_tables()
{
	read -ep "Would you like to flush tables? (y/n): " user_reply;
	if [[ $user_reply == [Yy] ]]
	then
		echo "Flushing Tables";
		sleep 1;
		iptables -F;
	fi
}

reset_tables()
{
	read -ep "Would you like to reset tables? (default DROP IN,OUT,FORWARD) (y/n): " user_reply;
	if [[ $user_reply == [Yy] ]]
	then
		echo "Are you sure?"; echo "This will disrupt any remote ssh connections you may currently have."; 
		read -ep "(This will set default DROP for everything..except OUTPUT) (y/n): " user_reply
		if [[ $user_reply == [yY] ]]
		then
			clear;
			echo "Flushing tables";
			iptables -F;
			iptables -X;
			sleep 1;
			echo "Resetting default rules";
			sleep 1;
			iptables -P INPUT DROP;
			iptables -P FORWARD DROP;
			iptables -P OUTPUT ACCEPT;
		fi
	fi
}

rest_of_script()
{
# protect our VPS from script-kiddies.
# !! Uncomment a rule to put into effect !! #

######################
### OPENING STUFF ###
####################

## open up connections for loop back
iptables -A INPUT -i lo -j ACCEPT
iptables -A OUTPUT -p icmp --icmp-type echo-request -j ACCEPT
iptables -A INPUT -p icmp --icmp-type echo-reply -j ACCEPT

## open regular established connections
iptables -A INPUT -m conntrack --ctstate ESTABLISHED,RELATED -j ACCEPT
iptables -A OUTPUT -m conntrack --ctstate NEW,ESTABLISHED -j ACCEPT

## open up webserver {80, 443}
#iptables -A INPUT -p tcp -m tcp --dport 80 -j ACCEPT
#iptables -A INPUT -p tcp -m tcp --dport 443 -j ACCEPT

## open SSH from specific IP/subnet
#iptables -A INPUT -p tcp -s 192.168.1.0/24 --dport ssh -m conntrack --ctstate NEW,ESTABLISHED -j ACCEPT
#iptables -A OUTPUT -p tcp --sport 22 -m conntrack --ctstate ESTABLISHED -j ACCEPT

## Prevent DoS attack
#iptables -A INPUT -p tcp --dport 80 -m limit --limit 25/minute --limit-burst 100 -j ACCEPT

######################
### LOGGING STUFF ###
####################

## log dropped packets
iptables -N LOGGING
iptables -A INPUT -j LOGGING
iptables -A LOGGING -m limit --limit 2/min -j LOG --log-prefix "IPTables Packet Dropped: " --log-level 7
iptables -A LOGGING -j DROP


######################
## DROPPING STUFF ###
####################

## drop ivalid packets
iptables -A INPUT -m conntrack --ctstate INVALID -j DROP

#######################
### BLOCKING STUFF ###
#####################

## blocking null packets
iptables -A INPUT -p tcp --tcp-flags ALL NONE -j DROP
# take all incoming packets with tcp flags NONE and just DROP them. Null packets are, simply said, recon packets. The attack patterns use these to try and see how we configured the VPS and find out weaknesses.

## blocking syn-flood attack
iptables -A INPUT -p tcp ! --syn -m state --state NEW -j DROP
# the attackers open a new connection, but do not state what they want (ie. SYN, ACK, whatever). They just want to take up our servers' resources. We won't accept such packages. 

## blocking XMAS packets
iptables -A INPUT -p tcp --tcp-flags ALL ALL -j DROP


}

flush_tables;
reset_tables;
# comment out the bottom for..pen-testing..cough
rest_of_script;


iptables -nvL
