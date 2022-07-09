#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[50],ch[50];
    FILE *fp;

    printf("Enter String : ");
    scanf("%[^\n]s",str);

    fp = fopen("Test.txt","w");
    fputs(str,fp);
    fclose(fp);

    fp = fopen("Test.txt","r");
    fgets(ch,50,fp);
    fclose(fp);

    printf("\n String from File : %s",ch);
    return 0;
}
