// C Program to Check Leap Year:

#include <stdio.h>
int main()
{
    int y;

    printf("Enter a year: ");
    scanf("%d", &y);

    if (y % 4 == 0)
        printf("%d is a leap year.", y);
    else
        printf("%d is not a leap year.", y);

    return 0;
}
