#include "Fixed.hpp"

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>

class Point {
	private :
		const Fixed x;
		const Fixed y;
	public :
		Point();
		Point(const Fixed a, const Fixed b);
		~Point();
		Point(const Point& other);
		Point& operator=(const Point& other);
		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif