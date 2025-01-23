/*
What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

(a) 8 % 5
(b) -8 % 5
(c) 8 % -5
(d) -8 % -5
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
a) 3
b) -3 si sigue la regla que del negativo, 2 si el residuo siempre es positivo
c) 3 si sigue la regla que del negativo, -2 si el residuo siempre es positivo
d) -3
*/