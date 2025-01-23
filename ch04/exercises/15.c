/*
Give the values of i and j after each of the following expression statements has been executed.
(Assume that i has the value 1 initially and j has the value 2.)

(a) i += j;
(b) i--;
(c) i * j / i;
(d) i % ++j;
*/

#include <stdio.h>
int main(void)
{
    int i = 1, j = 2;

    i += j;
    printf("%d %d\n", i, j);

    i = 1, j = 2;
    i--;
    printf("%d %d\n", i, j);

    i = 1, j = 2;
    i *j / i;
    printf("%d %d\n", i, j);

    i = 1, j = 2;
    i % ++j;
    printf("%d %d\n", i, j);

    return 0;
}

/* Output:

a) 3 2
b) 0 2
c) 1 2
d) 1 3
*/