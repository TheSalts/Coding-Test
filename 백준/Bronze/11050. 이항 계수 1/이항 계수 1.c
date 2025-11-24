#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", factorial(a) / (factorial(b) * factorial(a - b)));
    return 0;
}