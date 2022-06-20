#include <stdio.h>
#include <conio.h>
int main()
{
    float series(float, int), x;
    int n;
    printf("\nEnter x : ");
    scanf("%f", &x);
    printf("\nEnter n : ");
    scanf("%d", &n);
    printf("\nAns %f", series(x, n));
    return 0;
}
float series(float x, int n)
{
    long factorial(int);
    float power(float, int);
    float sum = 0;
    int i, s = 1;
    for (i = 1; i <= n; i += 2)
    {
        sum += (power(x, i) / factorial(i)) * s;
        s *= -1;
    }
    return sum;
}
float power(float x, int y)
{
    float p = 1;
    int i;
    for (i = 1; i <= y; i++)
        p *= x;
    return p;
}
long factorial(int p)
{
    long f = 1;
    int i;
    for (i = 1; i <= p; i++)
        f *= i;
    return f;
}
