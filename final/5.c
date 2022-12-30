#include<stdio.h>
#include<string.h>

struct{
    int hour,minute,second;
}time_t;


new_time(time_now, secs) 

time_t
new_time(time_t time_of_day, int elapsed_secs)
{
    int new_hr,new_min,new_sec;

    new_sec=time_of_day.second+elapsed_secs;
    time_of_day.second=new_sec%60;
    new_min=time_of_day.mintue+new_sec/60;
    time_of_day.minute=new_min%60;
    new_hr=time_of_day.hour+new_min/60;
    time_of_day.hour=new_hr%24;

    return(time_of_day);
}
time_now = new_time(time_now, secs);