#include "shape.h"

Shape::Shape(QPaintDevice* parent): painter(parent)
{}

Shape::Shape(QPaintDevice *parent, ShapeType arg,\
             Qt::GlobalColor gc1, double width, Qt::PenStyle ps,\
             Qt::PenCapStyle pcs, Qt::PenJoinStyle pjs,\
             Qt::GlobalColor gc2, Qt::BrushStyle bs):\
    painter(parent),shape {arg},
    pen(gc1,width,ps,pcs,pjs),\
    brush(gc2,bs)
{}

Shape::Shape(QPaintDevice *parent, ShapeType arg,\
             QPen rhsPen, QBrush rhsBrush):\
    painter(parent), shape {arg},\
    pen(rhsPen), brush (rhsBrush)
{

}


Shape::~Shape(){}

ShapeType Shape::get_shape() const{
    return shape;
}
const QBrush& Shape::get_brush()const{
    return brush;
}
const QPen& Shape::get_pen()const{
    return pen;
}

void Shape::set_shape(ShapeType arg){
    shape=arg;
}

void Shape::set_pen(Qt::GlobalColor gc, int width,\
                    Qt::PenStyle ps, Qt::PenCapStyle pcs,\
                    Qt::PenJoinStyle pjs)
{
   pen.setColor(gc);
   pen.setWidth(width);
   pen.setStyle(ps);
   pen.setCapStyle(pcs);
   pen.setJoinStyle(pjs);
}


void Shape::set_brush(Qt::GlobalColor gc, Qt::BrushStyle bs)
{
    brush.setColor(gc);
    brush.setStyle(bs);
}

void Shape::defaultStyle()
{
    pen.setColor(Qt::black);
    pen.setWidth(0);
    pen.setCapStyle(Qt::SquareCap);
    pen.setJoinStyle(Qt::RoundJoin);
    brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);
}


QPainter& Shape::get_qpainter()
{
    return painter;
}


