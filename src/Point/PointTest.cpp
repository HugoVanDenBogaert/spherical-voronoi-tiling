#include "Point.hpp"

int main() {
    Point P1(1,0,0);
    Point P2(0,1,0);
    Point P3(0,0,1);

    // check if the getter work for P1
    if (P1.getX() != 1.f) return 1;
    if (P1.getY() != 0.f) return 1;
    if (P1.getZ() != 0.f) return 1;

    // check if the getter work for P2
    if (P2.getX() != 0.f) return 1;
    if (P2.getY() != 1.f) return 1;
    if (P2.getZ() != 0.f) return 1;

    // check if the getter work for P3
    if (P3.getX() != 0.f) return 1;
    if (P3.getY() != 0.f) return 1;
    if (P3.getZ() != 1.f) return 1;

    return 0;
}