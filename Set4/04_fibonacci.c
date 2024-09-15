
// C Program to Display Fibonacci Sequence :

#include <stdio.h>

void main()
{
    int n, a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
