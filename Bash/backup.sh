#!/usr/bin/env bash

#simple backup script

backup_file() {
    if [ -f "$1" ] ; then
        BACKUP_FILE="/var/tmp/$(basename ${1}).$(date + %F).$$"
        echo "Backing up $1 to  ${BACKUP_FILE}"
        cp $1 $BACKUP_FILE
    fi
}
backup_file /etc/hosts
if [ "$?" -eq "0" ] ; then
    echo "Backup successful"
    else
    echo "Backup failed"
    exit 1
fi
