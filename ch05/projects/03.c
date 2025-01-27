/*
Modify the broker.c program of Section 5.2 by making both of the following changes:

(a) Ask the user to enter the number of shares and the price per share, instead of the value
of the trade.

(b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more).
Display the rival’s commission as well as the commission charged by the original broker.
*/

#include <stdio.h>
int main(void)
{
    int numberShares;
    float commissionOriginal, commissionRival, value, pricePerShare;

    printf("Enter the number of shares: ");
    scanf("%d", &numberShares);
    printf("Enter the price per share: ");
    scanf("%f", &pricePerShare);

    value = numberShares * pricePerShare;

    if (value < 2500.00f)
        commissionOriginal = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commissionOriginal = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commissionOriginal = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commissionOriginal = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commissionOriginal = 155.00f + .0011f * value;
    else
        commissionOriginal = 255.00f + .0009f * value;

    if (commissionOriginal < 39.00f)
        commissionOriginal = 39.00f;

    if (numberShares < 2000.00f)
        commissionRival = 33.00f + 0.03f * numberShares;
    else if (numberShares >= 2000)
        commissionRival = 33.00f + 0.02f * numberShares;

    printf("Commission Broker Original: $%.2f\n", commissionOriginal);
    printf("Commission Broker Rival: $%.2f\n", commissionRival);

    return 0;
}