#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a = 0;
        char b[21] = "a";
        scanf("%d %s", &a, b);
        for (int j = 0; j < strlen(b); j++)
        {
            for (int k = 0; k < a; k++)
            {
                printf("%c", b[j]);
            }
        }
        printf("\n");
    }
    return 0;
}