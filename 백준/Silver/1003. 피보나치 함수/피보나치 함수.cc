#include <stdio.h>
long long int f(int n)
{
    if (n == -1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        long long int a = 1, b = 0, c;
        for (int i = 1; i <= n; i++)
        {
            c = b;
            b = a + b;
            a = c;
        }
        return b;
    }
}
int main()
{
    int n, k;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        printf("%lld %lld\n", f(k - 1), f(k));
    }
}