#include "wxpoints.h"

int main() {
    XYZ p1 = XYZ(12.13, 51.73, 13.89);
    XYZ p2 = XYZ(61.74, 61.84, 84.12);
    XYZ p3 = {26.25, 94.75, 63.86};
    p3.print();

    XYZ p4;
    p4.print();

    std::cout << std::endl;

    wxPoints points;

    points.addPoint(p1);
    points.addPoint(p2);

    points.print();
    points[1].print();

    std::cout << std::endl;


    XYZ p = points.getPoint(1);
    p.print();

    points.clear();
    std::cout << "List length: " << points.count() << std::endl;

    int a; std::cin >> a;

    return 0;
}
