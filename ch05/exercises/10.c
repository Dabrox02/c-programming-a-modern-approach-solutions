/*
What output does the following program fragment produce? (Assume that i is an integer variable.)

i = 1;

switch (i % 3) {
 case 0: printf("zero");
 case 1: printf("one");
 case 2: printf("two");
}

*/

#include <stdio.h>

int main(void)
{
    int i;
    i = 1;

    switch (i % 3)
    {
    case 0:
        printf("zero\n");
    case 1:
        printf("one\n");
    case 2:
        printf("two\n");
    }

    return 0;
}

/* Output
one two

El programa no tiene break por lo que continuara desde el caso 1 en adelate.
*/