#include <stdio.h>
#include <conio.h>
void main()
{
    float n, i;
    float s, sum = 0;
    printf("Enter the number : ");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        s = 1 / i;
        sum = s + sum;
    }
    printf("Answer = %f", sum);
}
