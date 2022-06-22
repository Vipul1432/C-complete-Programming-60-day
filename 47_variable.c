#include<stdio.h>
int r;
void print();
void function1();
void main()
{
	int i;
	print();
	printf("%d\n", r);
	for(i=1;i<=5;i++)
		function1();
}
void print()
{
	r = 36;
	printf ("%d\n",r);
}
void function1()
{
	static int n= 2;
	n=n*2;
	printf("n= %d\n",n);
}
