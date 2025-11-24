#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[260] = {
        0,
    };

    while (1)
    {
        int cnt = 0;
        fgets(input, sizeof(input), stdin);

        if (input[0] == '#')
            break;
        for (int i = 0; i < strlen(input); i++)
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')
                cnt++;
        printf("%d\n", cnt);
    }
    return 0;
}