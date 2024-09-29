#include <stdio.h>
#include <ctype.h>

void main()
{
    char a, a1;
    FILE *fp1, *fp2;

    fp1 = fopen("read.txt", "w");
    while ((a = getchar()) != EOF)
    {
        putc(a, fp1);
    }
    fclose(fp1);

    fp2 = fopen("read.txt", "r");
    while ((a1 = getc(fp2)) != EOF)
    {
        printf("%c", toupper(a1));
    }
    fclose(fp2);
}
