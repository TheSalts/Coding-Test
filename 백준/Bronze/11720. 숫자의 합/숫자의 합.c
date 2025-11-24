#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char input[101] = "a";
    scanf("%s", input);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += input[i] - '0';
    }
    printf("%d\n", cnt);
    return 0;
}