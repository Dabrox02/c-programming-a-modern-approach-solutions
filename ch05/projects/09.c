/*
Write a program that prompts the user to enter two dates and then indicates which date
comes earlier on the calendar:

Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

#define EARLIER -1
#define SAME 0
#define LATER 1

int main(void)
{

    int year1, month1, day1, year2, month2, day2, date;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &month2, &day2, &year2);

    if (year1 > year2)
    {
        date = LATER;
    }
    else if (year1 < year2)
    {
        date = EARLIER;
    }
    else
    {
        if (month1 < month2)
        {
            date = EARLIER;
        }
        else if (month1 > month2)
        {
            date = LATER;
        }
        else
        {
            if (day1 < day2)
            {
                date = EARLIER;
            }
            else if (day1 > day2)
            {
                date = LATER;
            }
            else
            {
                date = SAME;
            }
        }
    }

    switch (date)
    {
    case -1:
        printf("%d/%d/%d is earlier than %d/%d/%d",
               month1, day1, year1, month2, day2, year2);
        break;
    case 1:
        printf("%d/%d/%d is earlier than %d/%d/%d",
               month2, day2, year2, month1, day1, year1);
        break;
    case 0:
        printf("%d/%d/%d is the same as %d/%d/%d",
               month2, day2, year2, month1, day1, year1);
        break;
    }

    return 0;
}