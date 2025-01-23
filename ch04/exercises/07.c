/*
The algorithm for computing the UPC check digit ends with the following steps:
1. Subtract 1 from the total.
2. Compute the remainder when the adjusted total is divided by 10.
3. Subtract the remainder from 9.

It’s tempting to try to simplify the algorithm by using these steps instead:
1. Compute the remainder when the total is divided by 10.
2. Subtract the remainder from 10.

3. Why doesn’t this technique work?
*/

#include <stdio.h>
int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("primer suma, %d\n", first_sum);
    printf("segunda suma, %d\n", first_sum);
    printf("total, %d\n", total);

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}

/*
El algoritmo propuesto 10 - (total % 10) falla porque en los casos en los que el residuo sea 0, 
el codigo de verificacion sera 10 y solo puede estar entre 0 y 9

9 - ((30 - 1) % 10) = 0
10 - (30 % 10) = 10 
*/