#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            int temp = b;
            b = c;
            c = temp;
        }
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if (pow(a, 2) + pow(b, 2) == pow(c, 2))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}