#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N == 0)
        return 0;
    for (int i = 2; i <= N; i++)
    {
        while (N % i == 0)
        {
            printf("%d\n", i);
            N /= i;
        }
    }
    return 0;
}