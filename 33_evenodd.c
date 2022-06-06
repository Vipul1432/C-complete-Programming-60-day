#include <stdio.h>
void main()
{
    int a[50], i, n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Even numbers in the array are -> ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d\t", a[i]);
    }
    printf("Odd numbers in the array are -> ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            printf("%d\t", a[i]);
    }
}
