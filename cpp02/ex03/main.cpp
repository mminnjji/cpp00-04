#include "Point.hpp"

int main() {
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(4), Fixed(0));
    Point c(Fixed(2), Fixed(4));

    Point points[] = {
        Point(Fixed(2), Fixed(2)), // 삼각형 내부
        Point(Fixed(0), Fixed(0)), // 삼각형 꼭짓점
        Point(Fixed(4), Fixed(0)), // 삼각형 꼭짓점
        Point(Fixed(2), Fixed(4)), // 삼각형 꼭짓점
        Point(Fixed(2), Fixed(0)), // 삼각형 변 위
        Point(Fixed(5), Fixed(5)), // 삼각형 외부
        Point(Fixed(-1), Fixed(-1)), // 삼각형 외부
        Point(Fixed(3), Fixed(1))  // 삼각형 내부
    };

    for (int i = 0; i < 8; ++i) {
        if (bsp(a, b, c, points[i])) {
            std::cout << "Point (" << points[i].getX().toFloat() << ", " << points[i].getY().toFloat() << ") is inside the triangle." << std::endl;
        } else {
            std::cout << "Point (" << points[i].getX().toFloat() << ", " << points[i].getY().toFloat() << ") is outside the triangle." << std::endl;
        }
    }

    return 0;
}