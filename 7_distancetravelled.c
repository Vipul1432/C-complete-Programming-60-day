#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int d, u, a, t;
    printf("Enter the value of initial velocity : ");
    scanf("%d", &u);
    printf("Your value of time : ");
    scanf("%d", &t);
    printf("Your value of acceleration : ");
    scanf("%d", &a);
    d = u * t + a * pow(t, 2);
    printf("distance travelled = %d\n", d);
}
