#include "Fixed.hpp"

#include <iostream>

int main( void ) {
  Fixed a; // 객체 a 생성
  Fixed b( a ); //  객체 a 를 b로 복사 - 복사 생성자
  Fixed c;

  c = b; // 복사할당연산자

  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;

  return 0;
}