#!/usr/bin/env bash

# if no command line arg given
# set rental to Unknown
if [ -z $1 ] ; then
  rental="*** Unknown vehicle ***"
elif [ -n $1 ] ; then
# otherwise make first arg as a rental
  rental=$1
fi

# use case statement to make decision for rental
case $rental in
   "car") printf "For $rental rental is Rs.20 per k/m.";;
   "van") printf "For $rental rental is Rs.10 per k/m.";;
   "jeep") printf "For $rental rental is Rs.5 per k/m.";;
   "bicycle") printf "For $rental rental 20 paisa per k/m.";;
   "enfield") printf "For $rental rental Rs.3  per k/m.";;
   "thunderbird") printf "For $rental rental Rs.5 per k/m.";;
   *) printf "Sorry, I can not get a $rental rental  for you!";;
esac
