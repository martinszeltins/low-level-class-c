#include <stdio.h>
#include "include/point.h"
#include "include/colored_point.h"

int main() {
    int distance;
    struct Point point_one, point_two, point_three;

    point_new(&point_one, 15, 20);
    point_new(&point_two, 35, 40);
    point_new(&point_three, 71, 62);

    distance = point_get_distance(&point_one, &point_two);

    point_move(&point_three, 21, 43);

    distance = point_get_distance(&point_two, &point_three);

    printf("distance: %d \n", distance);

    // Colored Point
    int distance2;
    struct ColoredPoint colored_point, another_colored_point;

    colored_point_new(&colored_point, 65, 82, RED);
    colored_point_new(&another_colored_point, 157, 120, RED);

    distance2 = point_get_distance((struct Point *) &colored_point,
                                   (struct Point *) &another_colored_point);

    printf("distance2: %d \n", distance2);
}
