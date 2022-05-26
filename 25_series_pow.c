#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i,a,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    a=pow(i,2);     //a=i*i;
    sum=sum+a;
    }
    printf("Answer = %d",sum);
}
