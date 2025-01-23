/*
Show the output produced by each of the following program fragments.
Assume that i and j are int variables
*/

#include <stdio.h>
int main(void)
{
    int i, j, k;

    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);

    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);

    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);

    i = 2;
    j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);

    return 0;
}

/* Output:

a) 12 12
b) 3 4
c) 2 8
d) 6 9
*/