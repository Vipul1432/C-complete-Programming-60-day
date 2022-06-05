#include <stdio.h>
void main()
{
    long r[20];
    int m[20], i;
    for (i = 0; i < 20; i++)
    {
        printf("Enter student roll no and marks %d", i + 1);
        scanf("%ld%d", &r[i], &m[i]);
    }

    for (i = 0; i < 20; i++)
    {
        printf("The roll and marks of student %d", i + 1);
        printf("roll No=%ld\n  Mark=%d", r[i], m[i]);
    }
}
