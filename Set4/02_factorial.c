// C Program to Find Factorial of a Number :

#include <stdio.h>

void main()
{
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %d", fact);
}
