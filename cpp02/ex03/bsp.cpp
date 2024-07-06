#include "Point.hpp"

Fixed getSpace(Point const a, Point const b, Point const c)
{
	Fixed v1 = b.getX() - a.getX();
	Fixed v2 = c.getY() - a.getY();
	Fixed v3 = b.getY() - a.getY();
	Fixed v4 = c.getX() - a.getX();
	return ((v1 * v2 - v3 * v4 > 0) ? v1 * v2 - v3 * v4 : v3 * v4 - v1 * v2);
}

// 벡터곱을 통해 삼각형 내부 넓이를 구하고, 이를 더해 전체 삼각형의 넓이가 된다면 삼각형 내부의 점
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed total;
	total = getSpace(a, b, point) + getSpace(c, a, point) + getSpace(b, c, point);
	return (total == getSpace(a, b, c));
}