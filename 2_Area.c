#include <stdio.h>
#include <conio.h>

void main()

{
    int a, h, b;
    printf("Enter the value of height : ");
    scanf("%d", &h);
    printf("Enter the value of base : ");
    scanf("%d", &b);
    a = h * b * 0.5;
    printf("Area of triangle = %d", a);
}
