#include<stdio.h>
#include<conio.h>
int addnumber(int);
void main()
{
    int n;
    addnumber(n);
}
int addnumber(int n)
{
    int sum=0,i;
    printf("Enter the number of integers you want to add : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of entered integers = %d\n",sum);
}
