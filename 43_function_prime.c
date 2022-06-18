#include <stdio.h>
#include <conio.h>
int prime(int);
void main()
{
    int n, p;
    printf("Enter a number : ");
    scanf("%d", &n);
    p = prime(n);
    if (p == 1)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
}
int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
