#include <stdio.h>
#include "include/point.h"
#include "include/colored_point.h"

int main() {
    struct Point foo, bar, tar;
    int dist;
    point_new(&foo, 0, 0);
    point_new(&bar, 1, 1);
    point_new(&tar, -1, 2);
    dist = point_get_distance(&foo, &bar);
    point_move(&tar, 2, 4);
    dist = point_get_distance(&bar, &tar);

    printf("%d", dist);

    int dist2;
    struct ColoredPoint colored_point, another_colored_point;

    colored_point_new(&colored_point, 0, 2, RED);
    dist2 = point_get_distance((struct Point *) &colored_point, (struct Point *) &another_colored_point);
}
