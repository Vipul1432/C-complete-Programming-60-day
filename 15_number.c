#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, lar, sm, t;
    printf("Enter total number of elements : ");
    scanf("%d", &t);
    printf("Enter first number : ");
    scanf("%d", &n);
    lar = n;
    sm = n;
    for (i = 1; i <= t - 1; i++)
    {
        printf("\n Enter another numbers : ");
        scanf("%d", &n);
        if (n > lar)
            lar = n;
        if (n < sm)
            sm = n;
    }
    printf("\n The largest number is %d", lar);
    printf("\n The smallest number is %d", sm);
}
