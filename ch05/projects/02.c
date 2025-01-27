/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
form:

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>

int main(void)
{
    int hour, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minutes);

    if (hour >= 0 && hour < 24)
    {
        if (minutes >= 0 && minutes < 60)
        {
            printf("%.2d:%.2d ", hour == 0 || hour == 12 ? 12 : hour % 12, minutes);
            if (hour >= 12)
            {
                printf("p.m\n");
            }
            else
            {
                printf("a.m\n");
            }
        }
        else
        {
            printf("Minutes format incorrect");
        }
    }
    else
    {
        printf("Hour format incorrect");
    }

    return 0;
}
