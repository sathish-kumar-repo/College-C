#include <stdio.h>

void main()
{
    int a[10], i, j, t, n;

    printf("Enter number of elements:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("Sorted order: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
