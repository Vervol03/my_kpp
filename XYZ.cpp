#include "XYZ.h"
#include <iostream>


XYZ::XYZ() : x(0), y(0), z(0) {}

XYZ::XYZ(double x, double y, double z) : x(x), y(y), z(z) {}

void XYZ::print() const {
    std::cout << "X: " << x << ", Y: " << y << ", Z: " << z << std::endl;
}
