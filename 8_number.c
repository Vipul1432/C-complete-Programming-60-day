#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("You have entered a positive Number");
    }
    else if (n == 0)
    {
        printf("You have entered Zero Number");
    }
    else
    {
        printf("You have entered a negative Number");
    }
}
