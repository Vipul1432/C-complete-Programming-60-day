#include <stdio.h>
void main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
