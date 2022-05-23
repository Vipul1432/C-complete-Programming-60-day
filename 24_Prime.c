#include <stdio.h>
#include <conio.h>
void main()
{
	int i, n, flag = 0;
	printf("ENter the number : ");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("%d is Prime number.", n);
	else
		printf("%d is non Prime number.", n);
}
