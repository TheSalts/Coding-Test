#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (double)arr[i] / max * 100;
    }
    printf("%lf\n", sum / n);
    return 0;
}