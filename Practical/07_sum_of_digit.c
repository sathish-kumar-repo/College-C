#include <stdio.h>
void main()
{
    int n, s = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        s = s + r;
        n /= 10;
    }

    printf("Sum of digit = %d", s);
}
