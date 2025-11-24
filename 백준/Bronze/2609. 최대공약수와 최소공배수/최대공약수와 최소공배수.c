#include <stdio.h>

int get_f(int a, int b)
{
    return b ? get_f(b, a % b) : a;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int m = get_f(a, b);
    printf("%d\n", m);
    printf("%d\n", a * b / m);
    return 0;
}