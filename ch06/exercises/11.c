/*
What output does the following program fragment produce?

sum = 0;
for (i = 0; i < 10; i++) {
 if (i % 2)
 continue;
 sum += i;
}
printf("%d\n", sum);

*/

/*
Output:

Sum even numbers
2, 4, 6, 8 = 20

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int sum, i;
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}