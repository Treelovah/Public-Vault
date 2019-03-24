#! /bin/bash
# Author: @Treelovah
# Web: https://www.kryptsec.com
# Script to prompt ssh connection
# Last Edited: March 2019

sshStorage="$HOME/ssh"
[ -d $HOME/ssh ] || mkdir $HOME/ssh && echo "A new folder $sshStorage has been created by default and is where all future files run by this progam will be stored"
read -p "New ssh? or choose from saved? {'ssh' or 'saved'}: " choice1
if [[ $choice1 == 'ssh' ]]; then
  read -p "Server IP?: " serverName
  read -p "Username?: " userName
  read -p "Port? " userPort
  read -p "Do you want to save this connection? y/n: " choiceA
  if [[ $choiceA == 'y' ]]; then
    [ -e $HOME/$userName ] || echo "ssh -p $userPort ${userName}@$serverName" > $HOME/$userName && chmod 700 $HOME/$userName
    mv -v $HOME/$userName $sshStorage/${userName}.sh
    newFile=$sshStorage/${userName}.sh
    echo $newFile
    read -p "Ready to connect? y/n: " choice3
    if [[ choice3 == 'y' ]]; then
      bash $sshStorage/$newFile
    fi
  fi
elif [[ $choice1 == 'saved' ]]; then
  echo "please choose from saved connections: "
  echo "{"
find $sshStorage -type f -printf "%f\n"
  echo "}"
  read -p "Choose: " target
  bash $target
fi
