/* Do you get a warning message from the compiler? If so, what’s needed to make it go away? */

#include <stdio.h>

void main(void)
{
    printf("hello, world\n");
}

/*
    Es necesario agregar el return 0;
    Si es C89, dara un warning
    Si es c99, y la funcion es int, retornara por defecto 0
*/