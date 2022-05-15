#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, fact = 1;
    printf("Enter an integer : ");
    scanf("%d", &n);
    // show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i; // fact = fact*i;
        }
        printf("Factorial of %d = %d", n, fact);
    }
}
