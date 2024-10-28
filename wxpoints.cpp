#include "wxpoints.h"

WX_DEFINE_OBJARRAY(XYZArray);

wxPoints::wxPoints() {}
wxPoints::wxPoints(const wxPoints& other) : points(other.points) {}
wxPoints::~wxPoints() {}

void wxPoints::addPoint(const XYZ& point) {
    points.Add(point);
}

XYZ wxPoints::getPoint(size_t index) const {
    if (index < points.GetCount())
        return points.Item(index);
    else
        throw std::out_of_range("The index out range");
}

size_t wxPoints::count() const {
    return points.GetCount();
}

void wxPoints::clear() {
    points.Clear();
}

void wxPoints::print() const {
    for (size_t i = 0; i < points.GetCount(); ++i) {
        points[i].print();
    }
}

XYZ& wxPoints::operator[](size_t index) {
    return points[index];
}
