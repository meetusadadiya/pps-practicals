// 5. Write a C program to enter a distance in to kilometre
// and convert it in to meter, feet, inches and centimetre.

#include <stdio.h>

int main()
{
    float F, C;
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &C);
    F = (C * 1.8) + 32;
    printf("\n %.2f Celsius = %.2f Fahrenheit", C, F);
    return 0;
}
