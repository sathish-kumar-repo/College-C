// C Program to Count Number of Digits in an Integer :

#include <stdio.h>

void main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    printf("Number of digits = %d", count);
}
