/*
Extend the program in Programming Project 1 to handle three-digit numbers.
*/

#include <stdio.h>

int main(void)
{
    int number, first, middle, last;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    first = number / 100;
    middle = (number / 10) % 10;
    last = number % 10;

    printf("%d%d%d\n", last, middle, first);

    return 0;
}