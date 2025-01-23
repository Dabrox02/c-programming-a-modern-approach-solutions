/*
 What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

(a) 8 / 5
(b) -8 / 5
(c) 8 / -5
(d) -8 / -5
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
En C89, la división entre enteros trunca hacia cero, es decir, elimina la parte decimal y se queda solo con la parte entera del resultado.

Sin embargo, C89 permite que los compiladores elijan truncar hacia cero o hacia menos infinito cuando hay números negativos, 
lo que significa que algunos resultados pueden variar según la implementación del compilador.

a) 1
b) -1 o -2
c) -1 o -2 
d) 1
*/