#include <stdio.h>
#include <conio.h>

void main()
{
    int i, p, r, n;
    printf("Enter the value of Amount : ");
    scanf("%d", &p);
    printf("Enter the value of Rate : ");
    scanf("%d", &r);
    printf("Enter the value of Number of Year : ");
    scanf("%d", &n);
    i = p * r * n * 0.01;
    printf("Simple Interest = %d", i);
}
