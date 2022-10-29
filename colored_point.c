#include "include/colored_point.h"

void colored_point_new(struct ColoredPoint * me, int x, int y, int color)
{
    point_new(&me->parent, x, y);

    me->color = color;
}
