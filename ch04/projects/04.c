/*
Write a program that reads an integer entered by the user and displays it in octal (base 8):
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641

The output should be displayed using five digits, even if fewer digits are sufficient.

Hint:
To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal
number (1, in this case). Then divide the original number by 8 and repeat the process to
arrive at the next-to-last digit. (printf is capable of displaying numbers in base 8, as we’ll
see in Chapter 7, so there’s actually an easier way to write this program.)
*/

/* ===================================================== */

/* Forma 1: By @dabrox02 (me)*/
// #include <stdio.h>

// int main(void)
// {
//     int decimalNumber, octalNumber;
//     printf("Enter a number between 0 and 32767: ");
//     scanf("%d", &decimalNumber);

//     octalNumber += decimalNumber % 8;
//     decimalNumber /= 8;
//     octalNumber += (decimalNumber % 8) * 10;
//     decimalNumber /= 8;
//     octalNumber += (decimalNumber % 8) * 100;
//     decimalNumber /= 8;
//     octalNumber += (decimalNumber % 8) * 1000;
//     decimalNumber /= 8;
//     octalNumber += (decimalNumber % 8) * 10000;

//     printf("In octal, your number is: %.5d\n", octalNumber);
//     return 0;
// }

/* ===================================================== */

/* Forma 2: By @williamgherman*/
// #include <stdio.h>

// int main(void)
// {
//     int n;
//     printf("Enter a number between 0 and 32767: ");
//     scanf("%d", &n);
//     printf("In octal, your number is: %d%d%d%d%d\n",
//            (n / (8 * 8 * 8 * 8)) % 8,
//            (n / (8 * 8 * 8)) % 8,
//            (n / (8 * 8)) % 8,
//            (n / 8) % 8,
//            (n % 8));
//     return 0;
// }