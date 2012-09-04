#!/bin/bash
#this is method 1 and the script runs without crontab
#By PRASHANT KUMAR,11526
date=$(date +"%H-%M")
morning="07-30"


if [ "$date" = "$morning" ]
	then
	echo "GOOD MORNING"
	sleep 23h 
	sleep 59m  
	./file.sh
else 
	./file.sh
fi
