#include <stdio.h>

int main(){
    int year, remaining_year, leap_year, total_days, day, basic_year=2000;
    
    printf("Enter the year-->");
    scanf("%d", &year);

    year = (year-1) - basic_year;

    leap_year = year / 4;

    remaining_year = year - leap_year;

    total_days = (remaining_year*365) - (leap_year*366) + 1;

    day = total_days%7;

    if (day==0)
    {
        printf("Monday.\n");
    }

    else if (day==1)
    {
        printf("Tuesday.\n");
    }

    else if (day==2)
    {
        printf("Wednesday.\n");
    }

    else if (day==3)
    {
        printf("Thursday.\n");
    }

    else if (day==4)
    {
        printf("Friday.\n");
    }

    else if (day==5)
    {
        printf("Saturday.\n");
    }

    else if (day==6)
    {
        printf("Sunday.\n");
    }
    
    else
        printf("wrong entry..!!!\n");
    return 0;
}