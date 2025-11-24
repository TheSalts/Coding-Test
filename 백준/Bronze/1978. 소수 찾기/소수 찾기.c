#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    scanf("%d", &num);
    int arr[100] = {
        0,
    };
    int cnt = 0;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        cnt += isPrime(arr[i]);
    }
    printf("%d\n", cnt);
    return 0;
}