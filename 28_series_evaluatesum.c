#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int x, i, a, e, o, sum = 1, fact = 1;
    printf("Enter the number : ");
    scanf("%d", &x);
    for (i = 1; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            a = pow(x, i);
            fact = fact * i;
            e = a / fact;
            sum = sum + e;
        }
        else
        {
            a = pow(x, i);
            fact = fact * i;
            o = a / fact;
            sum = sum - o;
        }
    }
    printf("Answer = %d", sum);
}
