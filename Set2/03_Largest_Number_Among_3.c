// C Program to Find the Largest Number Among Three Numbers:

#include <stdio.h>

void main()
{
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest.", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest.", n2);
    else
        printf("%d is the largest.", n3);
}
