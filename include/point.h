#ifndef POINT_H
#define POINT_H

typedef struct {
    int x;
    int y;
} Point;

void point_new(Point * this, int x, int y);
void point_move(Point * this, int dx, int dy);
int point_get_distance(Point const * this, Point const * point);

#endif
