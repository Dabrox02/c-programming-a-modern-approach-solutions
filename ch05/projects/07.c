/*
Write a program that finds the largest and smallest of four integers entered by the user:

Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10

Use as few if statements as possible. Hint: Four if statements are sufficient.
*/

#include <stdio.h>

int main(void)
{

    int n1, n2, n3, n4, max, max1, max2, min, min1, min2;

    printf("Enter a complete UPC: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    min1 = n1 < n2 ? n1 : n2;
    min2 = n3 < n4 ? n3 : n4;
    min = min1 < min2 ? min1 : min2;

    max1 = n1 > n2 ? n1 : n2;
    max2 = n3 > n4 ? n3 : n4;
    max = max1 > max2 ? max1 : max2;

    printf("Min: %d \nMax: %d\n", min, max);

    return 0;
}