#include <stdio.h>

int main()
{
    int A, B, N, r;
    scanf("%d %d %d", &A, &B, &N);
    if (A % B == 0)
    {
        printf("0");
        return 0;
    }
    if (A > B)
        A %= B;
    for (int i = 0; i < N; i++)
    {
        A *= 10;
        r = A / B;
        A %= B;
    }
    printf("%d\n", r);
    return 0;
}