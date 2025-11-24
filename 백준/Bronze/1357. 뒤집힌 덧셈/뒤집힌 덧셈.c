#include <stdio.h>

int Rev(int x)
{
    int reversed = 0;
    while (x != 0)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return reversed;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", Rev(Rev(x) + Rev(y)));
    return 0;
}