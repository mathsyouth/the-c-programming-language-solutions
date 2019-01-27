#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day_of_year: set day of year from month & day */
int day_of_year(int year , int month, int day)
{
    int i, leap;

    if (year <= 0) {
        printf("error: year <= 0\n");
        return -1;
    }
    leap = year%4 == 0 && year%100 != 0 || year%400 != 0;
    if (month <= 0 || month > 12) {
        printf("error: month <= 0 or month > 12\n");
        return -1;
    }
    if (day <= 0 || day > daytab[leap][month]) {
        printf("eror: day <= 0 or day > daytab[leap][month]\n");
        return -1;
    }
    for (i = 1; i < month; i++)
        day += daytab[leap][i];
    return day; 
}


/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    
    if (year <= 0 || yearday <= 0) {
        printf("error: year <= 0 or yearday <= 0\n");
        *pmonth = -1;
        *pday = -1;
    }
    leap = year%4 == 0 && year%100 != 0 || year%400 != 0;
    for (i = 1; yearday > daytab[leap][i] && i < 13; i++)
        yearday -= daytab[leap][i];
    if (i > 12 && yearday > daytab[leap][12]) {
        printf("error: yearday > total days of year %lu\n", year);
        *pmonth = -1;
        *pday = -1;
    } else {
        *pmonth = i;
        *pday = yearday;      
    }
}
