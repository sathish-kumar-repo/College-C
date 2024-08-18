// C Program to Check Whether a Number is Prime or Not

#include <stdio.h>

void main()
{
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        printf("%d is not a prime number.\n", num);
    else
    {
        for (i = 2; i <= num / 2; i++) // i * i <= num
        {
            // printf("%d\n", num / 2);
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }
}
