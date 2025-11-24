#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char inputs[4][9];
    scanf("%s", inputs[0]);
    scanf("%s", inputs[1]);
    scanf("%s", inputs[2]);

    int input1, input2, input3;

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(inputs[i], "Fizz") != 0 && strcmp(inputs[i], "Buzz") != 0 && strcmp(inputs[i], "FizzBuzz") != 0)
        {
            switch (i)
            {
            case 0:
                input1 = atoi(inputs[0]);
                input2 = input1 + 1;
                input3 = input1 + 2;
                break;
            case 1:
                input2 = atoi(inputs[1]);
                input1 = input2 - 1;
                input3 = input2 + 1;
                break;
            case 2:
                input3 = atoi(inputs[2]);
                input1 = input3 - 2;
                input2 = input3 - 1;
                break;
            }
            break;
        }
    }

    int output = input3 + 1;
    if (output % 3 == 0 || output % 5 == 0)
    {
        if (output % 3 == 0 && output % 5 == 0)
            printf("FizzBuzz\n");
        else if (output % 3 == 0)
            printf("Fizz\n");
        else if (output % 5 == 0)
            printf("Buzz\n");
    }
    else
        printf("%d\n", output);
    return 0;
}