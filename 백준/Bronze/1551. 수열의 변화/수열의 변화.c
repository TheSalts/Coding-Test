#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    char arr[101];
    int arr2[51];
    scanf("%s", arr);
    char *token = strtok(arr, ",");
    int index = 0;
    while (token != NULL)
    {
        arr2[index] = atoi(token);
        token = strtok(NULL, ",");
        index++;
    }
    if (K == 0)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d", arr2[i]);
            if (i + 1 == N)
                printf("\n");
            else
                printf(",");
        }
        return 0;
    }
    int result[sizeof(arr2) / sizeof(int)];
    for (int j = 0; j < K; j++)
    {
        for (int i = 0; i < sizeof(arr2) / sizeof(int); i++)
        {
            if (i + 1 == sizeof(arr2) / sizeof(int))
            {
                result[i] = arr2[i] - arr2[i - 1];
                break;
            }
            result[i] = arr2[i + 1] - arr2[i];
        }
        memcpy(arr2, result, sizeof(result));
    }
    for (int i = 0; i < N - K; i++)
    {
        printf("%d", result[i]);
        if (i + 1 == N - K)
            printf("\n");
        else
            printf(",");
    }

    return 0;
}