#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, n;
    char name;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter Student Name : ");
        scanf("%s", &name);
        float avg, sum = 0;
        for (j = 1; j <= 3; j++)
        {
            printf("Enter Student Subject Mark : ");
            scanf("%d", &n);
            sum = sum + n;
        }
        avg = sum / 3;
        printf("\n The sum of given number is %0.2f", sum);
        printf("\n The avg of given number is %0.2f", avg);
    }
}
