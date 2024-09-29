// 1. C Program to Check Whether a Number is Palindrome or Not :

#include <stdio.h>

void main()
{
    int n, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }

    if (temp == rev)
        printf("%d is a palindrome.", temp);
    else
        printf("%d is not a palindrome.", temp);
}
