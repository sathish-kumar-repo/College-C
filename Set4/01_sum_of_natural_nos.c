
// C Program to Calculate the Sum of Natural Numbers :

#include <stdio.h>

void main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d", sum);
}
