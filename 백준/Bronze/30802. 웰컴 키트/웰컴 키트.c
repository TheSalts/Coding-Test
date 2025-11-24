#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    int S, M, L, XL, XXL, XXXL;
    scanf("%d %d %d %d %d %d", &S, &M, &L, &XL, &XXL, &XXXL);
    int T, P;
    scanf("%d %d", &T, &P);
    int cnt = 0;

    if (S % T != 0)
        cnt += S / T + 1;
    else
        cnt += S / T;

    if (M % T != 0)
        cnt += M / T + 1;
    else
        cnt += M / T;

    if (L % T != 0)
        cnt += L / T + 1;
    else
        cnt += L / T;

    if (XL % T != 0)
        cnt += XL / T + 1;
    else
        cnt += XL / T;

    if (XXL % T != 0)
        cnt += XXL / T + 1;
    else
        cnt += XXL / T;

    if (XXXL % T != 0)
        cnt += XXXL / T + 1;
    else
        cnt += XXXL / T;

    int pensCount = num / P;
    int penCount = num % P;

    printf("%d\n", cnt);
    printf("%d %d\n", pensCount, penCount);
    return 0;
}