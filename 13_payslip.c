#include <stdio.h>
#include <conio.h>
void main()
{
    int basic, da, hra, pf, gross, ma, nt;
    printf("Enter the basic : ");
    scanf("%d", &basic);
    ma = 300;
    da = 0.1 * basic;
    hra = 0.075 * basic;
    pf = 0.125 * basic;
    gross = basic + da + hra + ma;
    printf("Gross Salary is =%d\n", gross);
    nt = gross - pf;
    printf("Net Salary is =%d", nt);
}
