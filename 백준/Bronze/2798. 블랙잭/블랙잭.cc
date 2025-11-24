#include <stdio.h>

int main()
{
    int N, M;
    int numbers[100];
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int output;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = numbers[i] + numbers[j] + numbers[k];
                if (sum <= M && sum > output)
                {
                    output = sum;
                }
            }
        }
    }
    printf("%d\n", output);
    return 0;
}