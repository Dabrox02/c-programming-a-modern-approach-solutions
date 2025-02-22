/*
Show the output produced by each of the following program fragments.
Assume that i and j are int variables
*/

#include <stdio.h>
int main(void)
{
    int i, j, k;

    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n", i);

    i = 10;
    j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);

    i = 7;
    j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);

    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}

/* Output:

a) 0 2
b) 4 11 6
c) 0 8 7
d) 3 4 5 4
*/