#include <stdio.h>
#include <string.h>

void computeLPSArray(char *pat, int M, int *lps)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int lps[M];
    computeLPSArray(pat, M, lps);

    int i = 0;
    int j = 0;
    int resultIndex[1000001] = {0}, resultCnt = 0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
            resultIndex[resultCnt++] = i - j;
            j = lps[j - 1];
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }

    printf("%d\n", resultCnt);
    for (int i = 0; i < resultCnt; i++)
    {
        if (i == resultCnt - 1)
        {
            printf("%d\n", resultIndex[i] + 1);
            break;
        }
        printf("%d ", resultIndex[i] + 1);
    }
}

int main()
{
    char T[1000001];
    char P[1000001];
    gets(T);
    gets(P);
    KMPSearch(P, T);
    return 0;
}