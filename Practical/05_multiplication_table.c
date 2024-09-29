#include <stdio.h>

void main()
{
    int n, i, x;
    printf("Enter the table: ");
    scanf("%d", &x);
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        printf("%d*%d=%d\n", i, x, i * x);
}
