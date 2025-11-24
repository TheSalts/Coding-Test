#include <stdio.h>
#include <string.h>
int main()
{
    char inputs[101] = "a";
    scanf("%s", inputs);
    int cnt = 0;
    for (int i = 0; inputs[i] != '\0'; i++)
    {
        if (i + 1 == '\0')
            break;
        char first = inputs[i];
        char second = inputs[i + 1];
        char third;
        if (i + 2 != '\0')
        {
            third = inputs[i + 2];
            if (first == 'd' && second == 'z' && third == '=')
            {
                i += 2;
                cnt++;
                continue;
            }
        }
        if (first == 'c' && (second == '=' || second == '-'))
        {
            i++;
            cnt++;
        }
        else if (first == 'd' && second == '-')
        {
            i++;
            cnt++;
        }
        else if (first == 'l' && second == 'j')
        {
            i++;
            cnt++;
        }
        else if (first == 'n' && second == 'j')
        {
            i++;
            cnt++;
        }
        else if (first == 's' && second == '=')
        {
            i++;
            cnt++;
        }
        else if (first == 'z' && second == '=')
        {
            i++;
            cnt++;
        }
        else
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}