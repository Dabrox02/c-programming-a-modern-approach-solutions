/*
Write a program that calculates how many digits a number contains:

Enter a number: 374
The number 374 has 3 digits

You may assume that the number has no more than four digits.

Hint: Use if statements to test the number.
For example, if the number is between 0 and 9, it has one digit.
If the number is between 10 and 99, it has two digits
*/

#include <stdio.h>

int main(void)
{
    int number;
    printf("Ingresa un número: ");
    scanf("%d", &number);
    number = number >= 0 ? number : -number;

    if (number < 10)
        printf("El numero %d tiene 1 digito", number);
    else if (number < 100)
        printf("El numero %d tiene 2 digitos", number);
    else if (number < 1000)
        printf("El numero %d tiene 3 digitos", number);
    else if (number < 10000)
        printf("El numero %d tiene 4 digitos", number);
    else if (number < 100000)
        printf("El numero %d tiene 5 digitos", number);
    else if (number < 1000000)
        printf("El numero %d tiene 6 digitos", number);
    else if (number < 10000000)
        printf("El numero %d tiene 7 digitos", number);
    else if (number < 100000000)
        printf("El numero %d tiene 8 digitos", number);
    else if (number < 1000000000)
        printf("El numero %d tiene 9 digitos", number);
    else if (number < 10000000000)
        printf("El numero %d tiene 10 digitos", number);
    else
        printf("El numero %d tiene mas de 10 digitos", number);

    return 0;
}
