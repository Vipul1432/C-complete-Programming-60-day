#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    printf("Enter a string : ");
    gets(s1);
    strupr(s1);
    printf("Upper string is : ");
    puts(s1);
}
