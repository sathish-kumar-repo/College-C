#include <stdio.h>

void main()
{
    int p, n, r;
    float si;

    printf("Enter p, n, r values : ");
    scanf("%d%d%d", &p, &n, &r);

    si = (p * n * r) / 100;

    printf("Simple Interst = %f", si);
}
