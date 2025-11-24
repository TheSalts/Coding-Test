#include <stdio.h>

int main()
{

    while (1)
    {
        int a = -1, b = -1;
        scanf("%d %d", &a, &b);
        if (a == -1 || b == -1)
            break;
        printf("%d\n", a + b);
    }
    return 0;
}