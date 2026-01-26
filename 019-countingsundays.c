#include <stdio.h>
int isLeap(int year)
{
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}
int main()
{
    int daysInMonth[] =
    {31,28,31,30,31,30,31,31,30,31,30,31};
    int day = 0;
    int count = 0;
    for (int year = 1900; year <= 2000; year++)
    {
        for (int month = 0; month < 12; month++)
        {
            int days = daysInMonth[month];

            if (month == 1 && isLeap(year))
                days = 29;
            if (year >= 1901 && day == 6)
                count++;

            day = (day + days) % 7;
        }
    }
    printf("Number of Sundays = %d\n", count);
    return 0;
}

