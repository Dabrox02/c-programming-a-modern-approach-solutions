/*
Using the switch statement, write a program that converts a numerical grade into a letter
grade:
Enter numerical grade: 84
Letter grade: B

Use the following grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten’s digit.
*/

#include <stdio.h>

int main(void)
{
    int grade, gradeTens;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Error, grade must be between 0 and 100.");
        return 1;
    }

    gradeTens = grade / 10;

    switch (gradeTens)
    {
    case 9:
    case 10:
        printf("Letter Grade: A");
        break;
    case 8:
        printf("Letter Grade: B");
        break;
    case 7:
        printf("Letter Grade: C");
        break;
    case 6:
        printf("Letter Grade: D");
        break;
    default:
        printf("Letter Grade: F");
        break;
    }

    return 0;
}