/*
What does the following statement print if i has the value 17?
What does it print if i has the value –17?

printf("%d\n", i >= 0 ? i : -i);
*/

#include <stdio.h>

int main(void)
{
    int i;
    i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}

/*
Para ambos casos, tanto 17 como -17 el valor que retornara siempre sera un valor positivo mayor o igual que 0
 */