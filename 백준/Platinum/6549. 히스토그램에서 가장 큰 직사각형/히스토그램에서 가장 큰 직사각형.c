#include <stdio.h>
#include <math.h>

long long min(long long a, long long b)
{
    return (a < b) ? a : b;
}

long long max(long long a, long long b)
{
    return (a > b) ? a : b;
}
long long maxRectangle(long long arr[], int start, int end)
{
    if (start > end)
        return 0;

    int mid = (start + end) / 2;
    long long leftMax = maxRectangle(arr, start, mid - 1);
    long long rightMax = maxRectangle(arr, mid + 1, end);

    long long minHeight = arr[mid];
    long long maxArea = minHeight;
    int left = mid, right = mid;

    while (left > start || right < end)
    {
        if (right < end && (left == start || arr[right + 1] >= arr[left - 1]))
        {
            right++;
            minHeight = min(minHeight, arr[right]);
        }
        else
        {
            left--;
            minHeight = min(minHeight, arr[left]);
        }
        maxArea = max(maxArea, minHeight * (right - left + 1));
    }

    return max(maxArea, max(leftMax, rightMax));
}

int main()
{
    while (1)
    {
        int N = 0;
        scanf("%d", &N);
        if (N == 0)
            break;
        long long inputs[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%lld", &inputs[i]);
        }
        printf("%lld\n", maxRectangle(inputs, 0, N - 1));
    }
    return 0;
}