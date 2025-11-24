#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * input - 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = input - 2; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * input - 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}