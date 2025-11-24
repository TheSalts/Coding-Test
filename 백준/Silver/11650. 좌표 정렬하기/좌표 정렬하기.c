#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
} Point;

int comparePoints(const void *a, const void *b)
{
    Point *pointA = (Point *)a;
    Point *pointB = (Point *)b;
    if (pointA->x == pointB->x)
    {
        return pointA->y - pointB->y;
    }
    return pointA->x - pointB->x;
}

int main()
{
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    Point points[n];
    for (int i = 0; i < n; i++)
    {
        points[i].x = x[i];
        points[i].y = y[i];
    }

    qsort(points, n, sizeof(Point), comparePoints);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", points[i].x, points[i].y);
    }
    return 0;
}