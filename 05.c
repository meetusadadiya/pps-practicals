// 5. Write a C program to enter a distance in to kilometre
// and convert it in to meter, feet, inches and centimetre.

#include <stdio.h>

int main()
{
    float km;
    printf("Enter Length in KiloMeter : ");
    scanf("%f", &km);
    printf("\n %f KM = %f Meters", km, km * 1000);
    printf("\n %f KM = %f Feets", km, km * 3280.84);
    printf("\n %f KM = %f Inches", km, km * 39370.08);
    printf("\n %f KM = %f Centimeters", km, km * 1000 * 100);
    return 0;
}