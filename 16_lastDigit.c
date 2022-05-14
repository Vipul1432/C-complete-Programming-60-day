#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter an Integer : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Last Digit is Even");
    }
    else
    {
        printf("Last Digit is Odd");
    }
}
