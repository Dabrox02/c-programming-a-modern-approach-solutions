/*
 Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.
*/

#include <stdio.h>

int main(void)
{
    // int i = 5, j = 3;
    // printf("%d %d", i / j, i % j);

    // int i = 2, j = 3;
    // printf("%d", (i + 10) % j);

    // int i = 7, j = 8, k = 9;
    // printf("%d", (i + 10) % k / j);

    int i = 1, j = 2, k = 3;
    printf("%d", (i + 5) % (j + 2) / k);
    
    return 0;
}

/*
a) 1, 2
b) 0
c) 1
d) 0

*/