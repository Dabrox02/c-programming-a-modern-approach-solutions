/*
 Repeat Exercise 5 for C99.
*/

#include <stdio.h>

int main(void)
{

    int i = 8, j = 5;
    printf("%d\n", i % j);

    i = -8, j = 5;
    printf("%d\n", i % j);

    i = 8, j = -5;
    printf("%d\n", i % j);

    i = -8, j = -5;
    printf("%d\n", i % j);

    return 0;
}

/*
C99 sigue la regla de el residuo tiene el mismo signo que el dividendo.
a) 3
b) -3 
c) 3 
d) -3
*/