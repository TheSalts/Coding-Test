#include <stdio.h>
#include <math.h>

int getDistance(int x1, int x2, int y1, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int list[9] = {
        0,
    };
    list[0] = getDistance(x, 0, y, 0);
    list[1] = getDistance(x, w, y, 0);
    list[2] = getDistance(x, 0, y, h);
    list[3] = getDistance(x, w, y, h);
    list[4] = getDistance(x, x, y, h);
    list[5] = getDistance(x, x, y, 0);
    list[6] = getDistance(x, 0, y, y);
    list[7] = getDistance(x, w, y, y);
    int max = list[0];
    for (int i = 0; i < 8; i++)
    {

        max = max < list[i] ? max : list[i];
    }
    printf("%d\n", max);
    return 0;
}
