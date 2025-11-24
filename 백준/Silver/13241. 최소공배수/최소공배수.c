#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a * b / gcd(a, b));
    return 0;
}