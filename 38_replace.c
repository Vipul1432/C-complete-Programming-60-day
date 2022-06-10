#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  char s[10], chr, repl_chr;

  int i = 0;
  printf("\nEnter a string: ");
  scanf("%s", s);
  printf("Enter character to be replaced : ");
  fflush(stdin);
  scanf("%c", &chr);
  printf("Enter replacement character : ");
  fflush(stdin);
  scanf("%c", &repl_chr);
  while (s[i] != '\0')
  {
    if (s[i] == chr)
    {
      s[i] = repl_chr;
    }
    i++;
  }
  printf("\nModified string after replacement is: %s", s);
  //  puts(s);
}
