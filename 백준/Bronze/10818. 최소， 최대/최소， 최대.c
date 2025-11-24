#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int max = 0, min = 0;
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        else
        {
            if (max < arr[i])
                max = arr[i];
            if (min > arr[i])
                min = arr[i];
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}