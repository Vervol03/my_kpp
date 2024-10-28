#ifndef XYZ_H
#define XYZ_H

#include <iostream>

class XYZ {
public:
    double x, y, z;
    XYZ();
    XYZ(double x, double y, double z);
    void print() const;
};

#endif // XYZ_H
