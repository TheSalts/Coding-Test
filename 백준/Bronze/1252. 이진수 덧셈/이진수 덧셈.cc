#include <stdio.h>
#include <string.h>

int main()
{
    char input1[81];
    char input2[81];
    scanf("%s %s", input1, input2);

    while (input1[0] == '0')
    {
        if (strlen(input1) == 1)
            break;
        memmove(input1, input1 + 1, strlen(input1));
    }
    while (input2[0] == '0')
    {
        if (strlen(input2) == 1)
            break;
        memmove(input2, input2 + 1, strlen(input2));
    }
    if (strlen(input1) < strlen(input2))
    {
        char temp[81];
        strcpy(temp, input1);
        strcpy(input1, input2);
        strcpy(input2, temp);
    }
    if (strlen(input1) != strlen(input2))
    {
        char temp2[81];
        int cnt = 0;

        for (int i = 0; i < strlen(input1) - strlen(input2); i++)
        {
            temp2[i] = '0';
            cnt++;
        }
        for (int i = cnt; i < strlen(input2) + cnt; i++)
        {
            temp2[i] = input2[i - cnt];
        }
        strcpy(input2, temp2);
    }
    // ^^^^^^^^^^^^ 길이 맞추기
    int add = 0;
    char output[82] = {
        0,
    };
    for (int i = strlen(input1) - 1; i >= 0; i--)
    {
        int bit1 = input1[i] == '1' ? 1 : 0;
        int bit2 = input2[i] == '1' ? 1 : 0;

        switch (bit1 + bit2 + add)
        {
        case 0:
            output[i] = '0';
            add = 0;
            break;
        case 1:
            output[i] = '1';
            add = 0;
            break;
        case 2:
            output[i] = '0';
            if (add == 0)
                add++;
            break;
        case 3:
            output[i] = '1';
            break;
        }
    }
    if (add > 0)
        printf("1");
    printf("%s\n", output);
    return 0;
}