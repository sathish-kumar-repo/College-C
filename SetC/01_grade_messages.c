
// Switch statement to print grade messages

#include <stdio.h>

int main()
{
    char g;

    printf("Enter your grade (A, B, C): ");
    scanf("%c", &g);

    switch (g)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Keep it up!\n");
        break;
    case 'C':
        printf("Good!\n");
        break;
    default:
        printf("Fail!\n");
    }

    return 0;
}
