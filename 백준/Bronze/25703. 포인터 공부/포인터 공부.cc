#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    scanf("%d", &input);
    printf("int a;\nint *ptr = &a;\n");
    if (input == 1)
        return 0;
    char star[101] = "*";
    for (int i = 2; i <= input; i++)
    {
        int num = i - 1;
        strcat(star, "*");
        if (num == 1)
            printf("int **ptr2 = &ptr;\n");
        else
            printf("int %sptr%d = &ptr%d;\n", star, i, i - 1);
    }
    return 0;
}