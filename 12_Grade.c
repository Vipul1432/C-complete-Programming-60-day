#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter the marks : ");
    scanf("%d", &n);
    if (n >= 80 & n <= 100)
    {
        printf("Distintion");
    }
    else if (n >= 60 & n <= 79)
    {
        printf("First Class");
    }
    else if (n >= 40 & n <= 59)
    {
        printf("Second class");
    }
    else
    {
        printf("fail");
    }
}
