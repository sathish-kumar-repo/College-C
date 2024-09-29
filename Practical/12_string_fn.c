#include <stdio.h>
#include <string.h>

void main()
{
    char s1[20], s2[20], s3[20], l;

    printf("Enter string 1:");
    scanf("%s", s1);
    printf("Enter string 2:");
    scanf("%s", s2);

    l = strlen(s1);
    printf("Length of string 1 is %d\n", l);

    strcpy(s3, s1);
    printf("Copied string is %s\n", s3);

    strcat(s1, s2);
    printf("Concatenated string is %s\n", s1);

    printf("Reversed string is %s", strrev(s1));
}
