#include <stdio.h>
#include <conio.h>

void main()
{
    float f, c;
    printf("Enter the value in Celcious : ");
    scanf("%f", &c);
    f = 1.8 * c + 32;
    printf("Your value in Farenhit is : %f", f);
}
