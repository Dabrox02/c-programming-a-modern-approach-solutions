/*
The following program fragments illustrate the short-circuit behavior of logical expressions.
Show the output produced by each, assuming that i, j, and k are int variables.

(a) i = 3; j = 4; k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k);

(b) i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d", i, j, k);

(c) i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k);

(d) i = 1; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d", i, j, k);
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i < j || ++j < k); // equivalente a (i < j) || ((++j) < k)
    printf("%d %d %d\n", i, j, k);

    i = 7;
    j = 8;
    k = 9;
    printf("%d ", i - 7 && j++ < k); // equivalente a (i - 7) && ((j++) < k)
    printf("%d %d %d\n", i, j, k);

    i = 7;
    j = 8;
    k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);

    i = 1;
    j = 1;
    k = 1;
    printf("%d ", ++i || ++j && ++k); // equivalente a (++i) || ((++j) && (++k))
    printf("%d %d %d\n", i, j, k);

    return 0;
}

/* Output

a) 1 3 4 5
b) 0 7 8 9
c) 1 8 8 9
c) 1 2 1 1

*/