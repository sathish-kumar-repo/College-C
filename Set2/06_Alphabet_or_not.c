// 1. C Program to Check Whether a Character is an Alphabet or not:

#include <stdio.h>

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is an alphabet.", ch);
    else
        printf("%c is not an alphabet.", ch);
}
