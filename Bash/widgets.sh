#!/bin/bash

temp=$(mktemp -t test.XXXXXX)
temp2=$(mktemp -t test.XXXXXX)

function diskspace
{
    df -k > $temp
    kdialog --textbox $temp 600 300
}

function who_is_active
{
    who > $temp
    kdialog --passivepopup $(sudo who) 4
}

function memusage
{
    cat /proc/meminfo > $temp
    kdialog --textbox $temp 600 300
}

memusage


# while [ 1 ]
# do
#     kdialog --menu "Sys Admin Menu" 40 80 10 1 "Display disk space" 2 "Display active users" 3 "Display memory usage" 0 "Exit" 2> $temp2
#     if [ $? -eq 1 ]
#     then
#         break
#     fi

#     selection=$(cat $temp2)

#     case $selection in
#         1)
#             diskspace ;;
#         2)
#             who_is_active ;;
#         3)
#             memusage ;;
#         0)
#             break ;;
#         *)
#             kdialog --msgbox "Sorry, invalid selection" 300 200 ;;
#     esac
# done
# rm -f $temp 2> /dev/null
# rm -f $temp2 2> /dev/null
