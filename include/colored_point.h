#ifndef COLORED_POINT_H
#define COLORED_POINT_H

#define RED 4

#include "include/point.h"

struct ColoredPoint {
    struct Point parent;
    int color;
};

void colored_point_new(struct ColoredPoint * me, int x, int y, int color);

#endif
