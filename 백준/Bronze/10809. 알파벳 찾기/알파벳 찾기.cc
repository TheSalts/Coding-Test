#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int count[26] = {
        0,
    };

    for (int i = 0; i < strlen(s); i++)
    {
        if (count[s[i] - 'a'] == 0)
            count[s[i] - 'a'] = i + 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
            printf("-1 ");
        else
            printf("%d ", count[i] - 1);
    }
    return 0;
}