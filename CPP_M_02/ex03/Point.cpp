#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y){}

Point::Point(Point const &src) : x(src.x), y(src.y){
}

Point::~Point(){}

Point &Point::operator=(Point const &rhs)
{
    if (x != rhs.x)
        const_cast<Fixed &>(x) = rhs.x;
    if (y != rhs.y)
        const_cast<Fixed &>(y) = rhs.y;
    return *this;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}
