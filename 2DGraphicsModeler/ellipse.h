#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse : public Shape
{
public:
    Ellipse()=delete;
    Ellipse(QPaintDevice * parent,ShapeBuffer );
    void setDimension(int x, int y, int r1, int r2);
    void draw(const int x, const int y) override;
    void move(const int x, const int y) override;
    double area() const override;
    double perimeter() const override;


private:
    int radius1;
    int radius2;
    int x;
    int y;
};

#endif // ELLIPSE_H
