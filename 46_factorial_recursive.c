#include<stdio.h>
int fact (int n)
{
	if(n<=1)
		return 1;
	else
	return (n * fact(n-1));
}
void main()
{
	int i,n;
	printf("Enter the Value of n : ");
	scanf("%d",&n);
	printf("Answer= %d", fact(n));
}
