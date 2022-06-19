#include <stdio.h>
void swap(int *, int *); // Swap function declaration
int main()
{
       int x, y;
       printf("Enter the value of x and y : ");
       scanf("%d%d", &x, &y);
       printf("Before Swapping\nx = %d\ny = %d\n", x, y);
       swap(&x, &y);
       printf("After Swapping\nx = %d\ny = %d\n", x, y);
       return 0;
}
// Swap function definition
void swap(int *a, int *b)
{
       int t;
       t = *b;
       *b = *a;
       *a = t;
}
