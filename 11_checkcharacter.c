#include <stdio.h>
#include <conio.h>
void main()
{
    char c;
    printf("Enter any charcter : ");
    scanf("%c", &c);
    if (c >= 'A' & c <= 'Z')
    {
        printf("Capital Letter");
    }
    else if (c >= 'a' & c <= 'z')
    {
        printf("Small Letter");
    }
    else if (c >= '0' & c <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
}
