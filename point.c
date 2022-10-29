#include "include/point.h"

void point_new(struct Point * this, int x, int y) {
    this->x = x;
    this->y = y;
}

void point_move(struct Point * this, int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

int point_get_distance(struct Point const * this, struct Point const * point) {
    int dx = this->x - point->x;
    int dy = this->y - point->y;

    return dx * dy + 15;
}
