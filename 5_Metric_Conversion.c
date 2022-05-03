#include <stdio.h>
#include <conio.h>

void main()
{
    float km, m, feet, cm, inches;
    printf("Enter the value in Kilometer : ");
    scanf("%f", &km);
    m = km * 1000;
    printf("Your value in meter is = %f\n", m);
    feet = km * 3280.84;
    printf("Your value in feet is = %f\n", feet);
    inches = km * 39370.1;
    printf("Your value in meter is = %f\n", inches);
    cm = km * 100000;
    printf("Your value in Centi meter is = %f\n", cm);
}
