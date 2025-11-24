#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int inputs[num][7];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &inputs[i][j]);
        }
    }
    for (int i = 0; i < num; i++)
    {
        int jjaksu[7];
        int emptynum = 0;
        int sum = 0;
        int min = 0;
        for (int j = 0; j < 7; j++)
        {
            int input = inputs[i][j];
            if (input % 2 == 0)
            {
                jjaksu[emptynum] = input;
                if (min == 0)
                    min = jjaksu[emptynum];
                if (jjaksu[emptynum] < min)
                    min = jjaksu[emptynum];
                sum += input;
                emptynum++;
            }
        }
        printf("%d %d\n", sum, min);
    }
    return 0;
}