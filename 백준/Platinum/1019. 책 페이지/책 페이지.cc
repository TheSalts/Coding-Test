#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numberCount[10] = {
    0,
};
void plusAll(int num)
{
    for (int i = 0; i < 10; i++)
    {
        numberCount[i] += num;
    }
}
int main()
{
    int N;
    scanf("%d", &N);

    int digits[10] = {
        0,
    };
    int temp = N;
    int index = 0;
    while (temp > 0)
    {
        digits[index] = temp % 10;
        temp /= 10;
        index++;
    }
    index--;
    if (digits[0] != 9)
    {
        int a = N / 10;
        a *= 10;
        for (int i = N + 1; i <= a + 9; i++)
        {
            int s = i;
            while (s > 0)
            {
                numberCount[s % 10]--;
                s /= 10;
            }
        }
        digits[0] = 9;
        N = a + 9;
    }
    for (int i = 0; i < index; i++)
    {
        plusAll(digits[i + 1] * (int)pow(10, i) * (i + 1));
        for (int j = 0; j < digits[i + 1]; j++)
        {
            numberCount[j + 1] += (int)pow(10, i + 1);
        }
        static int fix = 9;
        if (i >= 1)
            numberCount[digits[i + 1]] -= fix - (N % (int)pow(10, i + 1));
        fix = fix * 10 + 9;
    }
    for (int i = digits[index] + 1; i < 10; i++)
    {
        numberCount[i]++;
    }
    for (int i = 0; i <= digits[index]; i++)
    {
        numberCount[i]++;
    }
    numberCount[0]--;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numberCount[i]);
    }
    printf("\n");
    return 0;
}