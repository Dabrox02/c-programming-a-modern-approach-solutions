/*
    Write a program that declares several int and float variables—without initializing them
    and then prints their values. Is there any pattern to the values? (Usually there isn’t.)
*/

#include <stdio.h>

int main(void)
{
    float var1, var2, var3;
    int vari1, vari2, vari3;

    printf("%f, %f, %f \n", var1, var2, var3);
    printf("%d, %d, %d \n", vari1, vari2, vari3);
    return 0;
}

/*
Output:
0.000000, 0.000000, 0.000000
10438376, 0, 58
*/