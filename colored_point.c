#include "include/point.h"
#include "include/colored_point.h"

void colored_point_new(struct ColoredPoint * this, int x, int y, int color)
{
    point_new(&this->parent, x, y);

    this->color = color;
}
