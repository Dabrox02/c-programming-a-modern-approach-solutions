/*
The following program fragments illustrate the logical operators. Show the output produced
by each, assuming that i, j, and k are int variables.

(a) i = 10; j = 5;
printf("%d", !i < j);

(b) i = 2; j = 1;
printf("%d", !!i + !j);

(c) i = 5; j = 0; k = -5;
printf("%d", i && j || k);

(d) i = 1; j = 2; k = 3;
printf("%d", i < j || k);

*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 10;
    j = 5;
    printf("%d\n", !i < j); // equivalente a (!i) < j

    i = 2;
    j = 1;
    printf("%d\n", !!i + !j); // equivalente a (!(!i)) + (!j)

    i = 5;
    j = 0;
    k = -5;
    printf("%d\n", i && j || k); // equivalente a (i && j) || k

    i = 1;
    j = 2;
    k = 3;
    printf("%d\n", i < j || k); // equivalente a (i < j) || k

    return 0;
}

/* Output

a) 1
b) 1
c) 1
c) 1

*/