/*
 Write a program that asks the user for a two-digit number, then prints the English word for
the number:

Enter a two-digit number: 45
You entered the number forty-five.

Hint: Break the number into two digits. Use one switch statement to print the word for the
first digit (“twenty,” “thirty,” and so forth). Use a second switch statement to print the
word for the second digit. Don’t forget that the numbers between 11 and 19 require special
treatment.
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number >= 10 && number <= 19)
    {
        switch (number)
        {
        case 10:
            printf("Ten");
            break;
        case 11:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;
        case 14:
            printf("Fourteen");
            break;
        case 15:
            printf("Fiveteen");
            break;
        case 16:
            printf("Sixteen");
            break;
        case 17:
            printf("Seventeen");
            break;
        case 18:
            printf("Eighteen");
            break;
        case 19:
            printf("Nineteen");
            break;
        }
        return 0;
    }

    switch (number / 10)
    {
    case 2:
        printf("Twenty");
        break;
    case 3:
        printf("Thirty");
        break;
    case 4:
        printf("Forty");
        break;
    case 5:
        printf("Fifty");
        break;
    case 6:
        printf("Sixty");
        break;
    case 7:
        printf("Seventy");
        break;
    case 8:
        printf("Eighty");
        break;
    case 9:
        printf("Ninety");
        break;
    }

    switch (number % 10)
    {
    case 1:
        printf(", one");
        break;
    case 2:
        printf(", two");
        break;
    case 3:
        printf(", three");
        break;
    case 4:
        printf(", four");
        break;
    case 5:
        printf(", five");
        break;
    case 6:
        printf(", six");
        break;
    case 7:
        printf(", seven");
        break;
    case 8:
        printf(", eight");
        break;
    case 9:
        printf(", nine");
        break;
    }
    printf("\n");

    return 0;
}