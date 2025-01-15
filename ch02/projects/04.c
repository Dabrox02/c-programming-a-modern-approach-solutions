/*
Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:
Enter an amount: 100.00
With tax added: $105.00
*/

#include <stdio.h>

int main(void)
{
    const float tax = 0.05f;
    float dollars;

    printf("Ingresa los dolares: ");
    scanf("%f", &dollars);

    printf("Monto ingresado: %.2f", dollars);
    printf("Impuesto añadido: %.2f", (dollars * tax) + dollars);
    return 0;
}