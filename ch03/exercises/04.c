/*
Suppose that we call scanf as follows:
scanf("%d%f%d", &i, &x, &j);
If the user enters
10.3 5 6
what will be the values of i, x, and j after the call? (Assume that i and j are int variables
and x is a float variable.)
*/

#include <stdio.h>

int main(void)
{
    float x;
    int i, j;
    scanf("%d%f%d", &i, &x, &j);
    printf("i: %d x: %f j: %d", i, x, j);
    return 0;
}

/*
Output
    i: 10 x: 0.300000 j: 5
*/