#include <stdio.h>
#include <stdbool.h>

// 제곱 ㄴㄴ 수를 체크하는 배열
bool isSqr[1000021];

int main()
{
    long long min, max;
    scanf("%lld %lld", &min, &max);

    // 정답으로 출력할 제곱 ㄴㄴ수의 개수이다.
    long long cnt = max - min + 1;

    for (long long i = 2; i * i <= max; i++)
    {
        long long ret = min / (i * i); // 몫
        if (min % (i * i) != 0)        // 몫이 min 보다 작을 경우
            ret++;

        while (ret * (i * i) <= max)
        { // max 범위까지 제곱 ㄴㄴ 수 체크
            if (!isSqr[ret * (i * i) - min])
            {
                isSqr[ret * (i * i) - min] = true;
                cnt--;
            }
            ret++;
        }
    }

    printf("%lld\n", cnt);

    return 0;
}
