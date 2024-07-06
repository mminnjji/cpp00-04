#include "Point.hpp"

Point::Point()
{

}

Point::Point(const Fixed a, const Fixed b) : x(a), y(b)
{
}

Point::~Point() {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point& Point::operator=(const Point& other)
{
	if (this != &other) {
		(Fixed)this->x = other.getX();
		(Fixed)this->y = other.getY();
	}
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return(this->y);
}