/*
The following program fragments illustrate the relational and equality operators. Show the
output produced by each, assuming that i, j, and k are int variables.

(a) i = 2; j = 3;
k = i * j == 6;
printf("%d", k);

(b) i = 5; j = 10; k = 1;
printf("%d", k > i < j);

(c) i = 3; j = 2; k = 1;
printf("%d", i < j == j < k);

(d) i = 3; j = 4; k = 5;
printf("%d", i % j + i < k);

*/

#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 2, j = 3;
    k = i * j == 6;
    printf("%d\n", k);

    i = 5;
    j = 10;
    k = 1;
    printf("%d\n", k > i < j); // equivalente a (k > i) < j

    i = 3;
    j = 2;
    k = 1;
    printf("%d\n", i < j == j < k); // equivalente a (i < j) == (j < k)

    i = 3;
    j = 4;
    k = 5;
    printf("%d", i % j + i < k); // equivalente a ((i % j) + i) < k

    return 0;
}

/* Output

a) 1
b) 1
c) 1
c) 0

*/