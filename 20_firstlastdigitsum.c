#include<stdio.h>
#include<conio.h>
void main()
{
  	int n,fd,ld,sum = 0;
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d",&n);
  	fd = n;
  	while(fd >= 10)
  	{
  		fd = fd / 10;
	}
  	ld = n % 10;
  	sum = fd + ld;
	printf(" \n The Sum of First Digit (%d) and Last Digit (%d) of %d =  %d", fd, ld, n, sum);
}
