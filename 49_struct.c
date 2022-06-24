#include <stdio.h>

struct book
{
 int id;
 char name[20];
 float price;
};

int main(void)
{
 struct book b1;
 printf("\n Enter Book Id : ");
 scanf("%d",&b1.id);
 printf("\n Enter Book Name : ");
 scanf("%s",b1.name);
 printf("\n Enter Book Price : ");
 scanf("%f",&b1.price);

 printf("\nBook Id    = %d",b1.id);
 printf("\nBook Name  = %s",b1.name);
 printf("\nBook Price = %f",b1.price);
 return 0;
}
