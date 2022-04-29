#include <stdio.h>
#include <conio.h>

void main()
{
    int add, sub, mul;
    float a, b, div;
    printf("Enter the first value : ");
    scanf("%f", &a);
    printf("Enter the second value : ");
    scanf("%f", &b);
    add = a + b;
    printf("Addition Answer = %d\n", add);
    sub = a - b;
    printf("Substraction Answer = %d\n", sub);
    mul = a * b;
    printf("Multiplication Answer = %d\n", mul);
    div = a / b;
    printf("Division Answer = %f\n", div);
}
