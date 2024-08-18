// 1. C Program to Calculate the Power of a Number :

#include <stdio.h>

void main()
{
    int base, exp, res = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (int i = 1; i <= exp; i++)
        res *= base;

    printf("%d^%d = %d", base, exp, res);
}
