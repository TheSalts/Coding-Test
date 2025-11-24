#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    for (int j = 1; j <= input; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        for (int i = 2 * input - (2 * j); i > 0; i--)
        {
            printf(" ");
        }
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int j = input - 1; j >= 1; j--)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        for (int i = 2 * input - (2 * j); i > 0; i--)
        {
            printf(" ");
        }
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}