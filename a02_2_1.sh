#!/bin/bash
#It uses crontab to be able to run at a particular time
#PRASHANT KUMAR,11526

subject="REMINDER"
email="email@domain.com"
body="./tmp.txt"

echo "Reminder for class" >> ./temp.txt

mail -s "$subject" "$email" < $body

date >> ./reminder.txt
