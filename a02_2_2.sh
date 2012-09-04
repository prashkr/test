#this is a crontab file
#format is as follows:
# minute hour day_of_month month_of_year day_of_week command

#if the reminder is to be set for 10 mins before 3:00 pm i.e 2:50 pm on mondays and wednesdays then we'll have to add the following command:


50 14 * * 1,3 ./a02_2_1.sh   # './a02_2_1.sh' is the script to be executed
