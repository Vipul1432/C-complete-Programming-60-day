#include <stdio.h>
#include <conio.h>
void main()
{
    int n, rev = 0, remainder;
    printf("Enter an integer : ");
    scanf("%d", &n);
    // for(;n!=0;)
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10; // n /= 10;
    }
    printf("Reversed Number = %d", rev);
}
