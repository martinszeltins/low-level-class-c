#include "include/point.h"

void point_new(Point * this, int x, int y) {
    this->x = x;
    this->y = y;
}

void point_move(Point * this, int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

int point_get_distance(Point const * this, Point const * point) {
    int dx = this->x - point->x;
    int dy = this->y - point->y;

    return dx * dy + 15;
}
