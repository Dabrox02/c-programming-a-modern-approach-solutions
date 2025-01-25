/*
Write a single expression whose value is either –1, 0, or +1, depending on whether i is less
than, equal to, or greater than j, respectively
*/

/*
-1 si i es menor que j,
0 si i es igual a j,
+1 si i es mayor que j
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    i = 1;
    j = 2;
    printf("%d\n", (i > j) - (i < j));

    return 0;
}