/*
Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
Display each balance with two digits after the decimal point.

Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
a percentage and divide it by 12.
*/

#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment;

    printf("Ingrese el valor del prestamo: ");
    scanf("%f", &loan);
    printf("Ingrese el interes: ");
    scanf("%f", &interest_rate);
    printf("Ingrese el pago mensual: ");
    scanf("%f", &monthly_payment);

    float monthly_interest = ((interest_rate / 100) / 12) + 1;

    loan *= monthly_interest;
    loan -= monthly_payment;
    printf("Balance restante despues del primer pago: $%.2f \n", loan);
    loan *= monthly_interest;
    loan -= monthly_payment;
    printf("Balance restante despues del segundo pago: $%.2f \n", loan);
    loan *= monthly_interest;
    loan -= monthly_payment;
    printf("Balance restante despues del tercero pago: $%.2f \n", loan);

    return 0;
}