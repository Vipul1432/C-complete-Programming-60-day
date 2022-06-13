#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    printf("Enter a string : ");
    gets(s1);
    strrev(s1);
    printf("Reverse string is :");
    puts(s1);
}
