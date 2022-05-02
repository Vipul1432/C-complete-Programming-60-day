#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, c;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    c = x;
    x = y;
    y = c;
    printf("X is = %d\n", x);
    printf("Y is = %d", y);
}
