#include <stdio.h>

static char *daytab[] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day_of_year: set day of year from month & day */
int day_of_year(int year , int month, int day)
{
    int leap;
    char *p;

    if (year <= 0) {
        printf("error: year <= 0\n");
        return -1;
    }
    leap = year%4 == 0 && year%100 != 0 || year%400 != 0;
    if (month <= 0 || month > 12) {
        printf("error: month <= 0 or month > 12\n");
        return -1;
    }
    p = daytab[leap];
    if (day <= 0 || day > *(p+month)) {
        printf("eror: day <= 0 or day > daytab[leap][month]\n");
        return -1;
    }
    while (--month)
        day += *++p;
    return day; 
}


/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int leap;
    int *totaldays = {365, 366};
    char *p;
    
    if (year <= 0) {
        printf("error: year <= 0\n");
        *pmonth = -1;
        *pday = -1;
    }
    leap = year%4 == 0 && year%100 != 0 || year%400 != 0;
    p = daytab[leap];
    if (yearday <= 0 || yearday > totaldays[leap]) {
        printf("error: yearday <= 0 or yearday > total days of year %lu\n", year);
        *pmonth = -1;
        *pday = -1;
    }
    while (yearday > *++p)
        yearday -= *p;
    *pmonth = p - daytab[leap];
    *pday = yearday;      
}
