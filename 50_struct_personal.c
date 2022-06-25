#include<stdio.h>
#include<conio.h>
struct personal
{
	char name[20];
	int day;
	char  month[10];
	int year;
	float salary;

};
int main()
{
struct personal p;
printf("Input values\n");
scanf("%s %d %s %d %f",p.name,&p.day,p.month,&p.year,&p.salary);
printf("%s %d %s %d %f \n",p.name,p.day,p.month,p.year,p.salary);
}

