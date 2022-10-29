#ifndef COLORED_POINT_H
#define COLORED_POINT_H

#define RED 4

#include "include/point.h"

typedef struct {
    Point parent;
    int color;
} ColoredPoint;

void colored_point_new(ColoredPoint * me, int x, int y, int color);

#endif
