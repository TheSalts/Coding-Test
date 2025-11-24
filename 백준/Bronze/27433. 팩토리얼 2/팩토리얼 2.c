#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long sum = 1;
    for (int i = t; i > 0; i--)
    {
        sum *= i;
    }
    printf("%lld\n", sum);
    return 0;
}