#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, c;
	printf("Enter the value of A : ");
	scanf("%d", &a);
	printf("Enter the value of B : ");
	scanf("%d", &b);
	printf("Enter the value of C : ");
	scanf("%d", &c);
	if (a > b)
	{
		if (a > c)
			printf("Maximum number A");
		else
			printf("Maximum number C");
	}
	else
	{
		if (b > c)
			printf("Maximum number B");
		else
			printf("Maximum number C");
	}
}
