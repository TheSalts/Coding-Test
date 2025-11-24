#include <stdio.h>

int main()
{
    int inputs[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &inputs[i]);
    }
    int max = inputs[0];
    int maxIndex = 0;
    for (int i = 0; i < 9; i++)
    {
        if (inputs[i] > max)
        {
            max = inputs[i];
            maxIndex = i;
        }
    }
    printf("%d\n%d\n", max, maxIndex + 1);
    return 0;
}