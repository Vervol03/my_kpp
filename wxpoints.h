#ifndef XYZ_H_INCLUDED
#define XYZ_H_INCLUDED

#include "XYZ.h"
#include <wx/wx.h>
#include <wx/arrimpl.cpp>


WX_DECLARE_OBJARRAY(XYZ, XYZArray);

class wxPoints {
private:
    XYZArray points;

public:
    wxPoints();
    wxPoints(const wxPoints& other);
    virtual ~wxPoints();

    void addPoint(const XYZ& point);
    XYZ getPoint(size_t index) const;
    size_t count() const;
    void clear();
    void print() const;
    XYZ& operator[](size_t index);
};

#endif // XYZ_H_INCLUDED
