#include <stdio.h>
#include <string.h>

void repeat(int length)
{
    if (length <= 0)
        return;
    if (length >= 4)
    {
        printf("AAAA");
        if (length - 4 == 2)
        {
            repeat(2);
            return;
        }
        repeat(length - 4);
        return;
    }
    printf("BB");
}

int main()
{
    char input[51];
    scanf("%s", input);

    int dotcnt = 0;
    int dotArray[51] = {0};
    int dotIndex = 0;
    for (int i = 0; i < strlen(input) + 1; i++)
    {
        if (dotcnt > 0 && input[i] != '.')
        {
            dotArray[dotIndex] = dotcnt;
            dotcnt = 0;
            dotIndex++;
            continue;
        }
        if (input[i] == '.')
        {
            dotcnt++;
            continue;
        }
    }
    dotArray[dotIndex] = '\0';
    // if (dotIndex == 1 && strlen(input) == dotArray[0])
    // {
    //     printf("-1\n");
    //     return 0;
    // }
    dotIndex = 0;
    char inputTemp[51] = {0};
    strcpy(inputTemp, input);
    char *ptr = strtok(input, ".");
    while (ptr != NULL)
    {
        if (strlen(ptr) % 2 != 0)
        {
            printf("-1\n");
            return 0;
        }
        ptr = strtok(NULL, ".");
    }
    if (inputTemp[0] == '.')
    {
        for (int i = 0; i < dotArray[dotIndex]; i++)
        {
            printf(".");
        }
        dotIndex++;
    }
    ptr = strtok(inputTemp, ".");
    while (ptr != NULL)
    {
        repeat(strlen(ptr));
        ptr = strtok(NULL, ".");
        if (dotArray[dotIndex] != '\0')
        {
            for (int i = 0; i < dotArray[dotIndex]; i++)
            {
                printf(".");
            }
            dotIndex++;
        }
    }

    printf("\n");
    return 0;
}