#include <stdio.h>
#include <string.h>
int main()
{
    char ch, word[50];
    int i, count = 0;
    printf("Enter a string : ");
    gets(word);
    printf("Enter character : ");
    scanf("%c", &ch);
    for (i = 0; i < strlen(word); i++)
    {
        if (ch == word[i])
        {
            count++;
        }
    }
    printf("Character '%c' occured for %d times.", ch, count);
}
