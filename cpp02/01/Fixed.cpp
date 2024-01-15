#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;;
	fix = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;;
    if (this != &other) {
        fix = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;;
	return (fix);
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fix = raw;
}

Fixed::Fixed(const int intVal)
{
	std::cout << "Int constructor called" << std::endl;
	fix = intVal << frac;
}

Fixed::Fixed(const float floatVal)
{
    // 나머지와 정수 부분을 나누어 저장할 변수
    float remain;
    float real;
    int realInt;

    // 부동 소수점 값을 반올림하여 정수 부분을 얻음
    real = roundf(floatVal);

    // 부동 소수점 값이 양수인 경우
    if (floatVal >= 0.0)
    {
        if (real > floatVal)
            real -= 1.0;
        remain = floatVal - real;
    }
    // 부동 소수점 값이 음수인 경우
    else
    {
        if (real < floatVal)
            real += 1.0;
        remain = real - floatVal;
    }

    // 정수 부분을 이진 고정 소수점으로 변환
    realInt = static_cast<int>(real); 
    fix = realInt << frac; // 8비트 옮겨주기

    // 나머지 부분을 이진 고정 소수점으로 변환
    remain /= (1.0 / (1 << frac));
    realInt = static_cast<int>(roundf(remain));
    fix |= realInt;
}

float Fixed::toFloat( void ) const
{
	float	value;
	int		tmp;

	if (fix >= 0)
	{
		value = static_cast<float> (fix >> frac);
		value += (value & ((1 << numBits) - 1)) * (1.0) / (1 << numBits);
	}
	else
	{
		temp = value >> numBits;
		toStream = static_cast<float> (temp);
		toStream -= (value & ((1 << numBits) - 1)) * (1.0) / (1 << numBits);
	}
	return (value);
}