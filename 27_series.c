#include <stdio.h>
#include <conio.h>
void main()
{
    float n, i, sum = 0, s, fact = 1;

    printf("Enter the number : ");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        s = 1 / fact;
        sum = s + sum;
    }
    printf("Answer=%f", sum);
}
