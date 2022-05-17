#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, t1 = 0, t2 = 1, nxt;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series : ");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", t1);
        nxt = t1 + t2;
        t1 = t2;
        t2 = nxt;
    }
}
