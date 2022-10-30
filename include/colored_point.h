#ifndef COLORED_POINT_H
#define COLORED_POINT_H

#define RED 4

#include "include/point.h"

struct ColoredPoint {
    /**
     * You can implement inheritance by literally embedding the parent
     * (Point) struct as the first member of the subclass (ColoredPoint).
     * Such nesting of structures always aligns the first data member ‘parent’
     * at the beginning of every instance of the derived structure. This
     * alignment is guaranteed by the C standard. Specifically, WG14/N1124
     * Section 6.7.2.1.13 says: “A pointer to a structure object, suitably
     * converted, points to its initial member. There may be unnamed padding
     * within a structure object, but not at its beginning”. This alignment
     * lets you treat a pointer to the derived ColoredPoint struct as a pointer
     * to the Point base struct. All this is legal, portable, and blessed by
     * the Standard.
     * 
     * With this arrangement, you can always safely pass a pointer to
     * ColoredPoint to any C function that expects a pointer to Point.
     * Consequently, all functions designed for the Point structure are
     * automatically available to the ColoredPoint structure.
     * They are all inherited.
     */
    struct Point parent;
    int color;
};

void colored_point_new(struct ColoredPoint * me, int x, int y, int color);

#endif
