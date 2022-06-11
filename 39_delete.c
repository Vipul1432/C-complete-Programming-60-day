#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ch, ch1, word[50], word1[50];
    int i, j = 0;
    printf("Enter a string : ");
    gets(word);
    printf("Enter character : ");
    scanf("%c", &ch);
    for (i = 0; i < strlen(word); i++)
    {
        if (ch != word[i])
        {
            ch1 = word[i];
            word1[j] = ch1;
            j++;
        }
    }
    word1[j] = '\0';
    printf("Character '%c' Deleted from string is %s.\n", ch, word1);
}
