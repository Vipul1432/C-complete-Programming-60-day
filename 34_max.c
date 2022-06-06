#include <stdio.h>
void main()
{
        int a[50], i, n, max;
        printf("Enter the size of an array : ");
        scanf("%d", &n);
        printf("Enter the First elements of the array : ");
        scanf("%d", &a[0]);
        max = a[0];
        for (i = 1; i < n; i++)
        {
                printf("Enter the another elements of the array : ");
                scanf("%d", &a[i]);
                if (a[i] > max)
                        max = a[i];
        }
        printf("Maximum element from 1-Dimensional array is %d", max);
}
