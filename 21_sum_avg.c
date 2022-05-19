#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, t;
    float avg, sum = 0;
    printf("Enter total number of elements : ");
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        printf("\n Enter another numbers : ");
        scanf("%d", &n);
        sum = sum + n;
    }
    avg = sum / t;
    printf("\n The sum of given number is %0.2f", sum);
    printf("\n The avg of given number is %0.2f", avg);
}
