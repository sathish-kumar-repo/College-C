// C Program to Check Armstrong Number :

#include <stdio.h>

void main()
{
    int n, sum = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n != 0)
    {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (temp == sum)
        printf("%d is an Armstrong number.", temp);
    else
        printf("%d is not an Armstrong number.", temp);
}
