#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, h, w, count = 0;
    char name;
    for (i = 1; i <= 2; i++)
    {
        printf("Enter Person Name :");
        scanf("%s", &name);
        printf("Enter Person Height : ");
        scanf("%d", &h);
        printf("Enter Person Weight : ");
        scanf("%d", &w);
        if (h > 170 && w < 50)
            count++;
    }
    printf("Person having height greater than 170 and weight less than 50 : %d", count);
}
