/*
Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid.
After the user enters a UPC, the program will display either VALID or NOT VALID.
*/

#include <stdio.h>

int main(void)
{

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, sum1, sum2, total, checkDigit;

    printf("Enter a complete UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum1 = n1 + n3 + n5 + n7 + n9 + n11;
    sum2 = n2 + n4 + n6 + n8 + n10;
    total = 3 * sum1 + sum2;
    checkDigit = 9 - ((total - 1) % 10);

    if (n12 == checkDigit)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}