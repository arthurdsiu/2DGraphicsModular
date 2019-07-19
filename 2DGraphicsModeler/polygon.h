#ifndef POLYGON_H
#define POLYGON_H


#include "shape.h"
#include <cmath>
class Polygon : public Shape
{
public:
    Polygon():Shape(), polygon(G_DEFAULTQRECT) {setShape(POLYGON);};
    Polygon(const ShapeBuffer& buffer);
    ~Polygon()override{}

    void setShapeBuffer(ShapeBuffer&)override;
    void draw(const int x, const int y) override;
    void draw()override;
    void move(const int x, const int y)override;
    double area() const override;
    double perimeter() const override;
    void drawID();
    int getX() const override;
    int getY() const override;

private:
    QPolygon polygon;
    QString stringID;
};




#endif // POLYGON_H
