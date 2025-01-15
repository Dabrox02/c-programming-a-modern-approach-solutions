/*
Modify the program of Programming Project 2 so that it prompts the user to enter the radius
of the sphere.
*/

#include <stdio.h>

int main(void)
{
    const float pi = 3.14159;
    int radius;

    printf("Ingresa el valor para el radio: ");
    scanf("%d", &radius);

    float volume = (4.0f / 3.0f) * pi * (radius * radius * radius);
    printf("El volumen de la esfera con radio %d mtr es %.2f", radius, volume);
    return 0;
}