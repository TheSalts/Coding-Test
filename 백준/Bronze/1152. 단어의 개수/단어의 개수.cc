#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char *pt = strtok(str, " ");

    int count = 0;

    while (pt != NULL)
    {
        count++;
        pt = strtok(NULL, " ");
    }
    printf("%d\n", count);
    return 0;
}