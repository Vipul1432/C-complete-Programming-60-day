#include<stdio.h>
#include<conio.h>
void upper(char []);
int main()
{
            char str[20];
            printf("Enter string : ");
            gets(str);
            upper(str);
            return 0;
}
void upper(char str[20])
{
            int i;
            printf("%s in upper case is ",str);
            for(i=0;str[i]!=NULL;i++)
            {
                        if(str[i]>96 && str[i]<123)
                                    str[i]-=32;
            }
            printf("%s",str);
}

