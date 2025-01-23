/*
Repeat Exercise 3 for C99.
*/

#include <stdio.h>

int main(void)
{

    int i = 8, j = 5;
    printf("%d\n", i / j);

    i = -8, j = 5;
    printf("%d\n", i / j);

    i = 8, j = -5;
    printf("%d\n", i / j);

    i = -8, j = -5;
    printf("%d\n", i / j);

    return 0;
}

/*
En C99, la división entre enteros con signo sigue una regla clara: siempre trunca hacia cero, 
independientemente de si los operandos son positivos o negativos. 
Esto significa que el resultado de la división será el valor entero más cercano a cero, descartando cualquier parte decimal.

a) 1
b) -1
c) -1
d) 1
*/