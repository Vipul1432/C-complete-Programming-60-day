#include <stdio.h>

int main(void)
{
 int a[10]={2,4,6,7,8,9,1,2,3,4};
 int *p,i=0;
 p=&a[0];
 while(i<10)
 {
  printf("\n Position : %d Value : %d",i+1,*(p+i));
  i++;
 }
 return 0;
}
