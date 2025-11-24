#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    const char *strA = (const char *)a;
    const char *strB = (const char *)b;
    int lenA = strlen(strA);
    int lenB = strlen(strB);

    if (lenA != lenB)
        return lenA - lenB;
    return strcmp(strA, strB);
}

int main()
{
    int n;
    scanf("%d", &n);
    char arr[20003][55] = {
        "a",
    };
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    qsort(arr, n, sizeof(arr[0]), compare);
    for (int i = 0; i < n - 1; i++)
    {
        if (strcmp(arr[i], arr[i + 1]) == 0)
        {
            memmove(arr + i, arr + i + 1, (n - i - 1) * sizeof(arr[0]));
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}