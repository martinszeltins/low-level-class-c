#ifndef POINT_H
#define POINT_H

struct Point {
    int x;
    int y;
};

void point_new(struct Point * this, int x, int y);
void point_move(struct Point * this, int dx, int dy);
int point_get_distance(struct Point const * this, struct Point const * point);

#endif
