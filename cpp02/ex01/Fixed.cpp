#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;;
	this->fix = 0;
}

Fixed::Fixed (const int intVal)
{
	std::cout << "Int constructor called" << std::endl;;
	fix = intVal << frac;
}

Fixed::Fixed(const float floatVal)
{
	std::cout << "Float constructor called" << std::endl;;
	float real;
	float remain;

	real = roundf(floatVal);
	if (floatVal >= 0.0)
	{
		if (real > floatVal)
			real -= 1.0;
		remain = floatVal - real;	
	}
	else
	{
		if (real < floatVal)
			real += 1.0;
		remain = real - floatVal;
	}

	fix = static_cast<int>(real) << frac;
	remain *= 1 << frac;
	fix |= static_cast<int>(roundf(remain));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;;
	this->fix = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignation operator called" << std::endl;;
    if (this != &other) {
        fix = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const
{
	return (fix);
}
void Fixed::setRawBits( int const raw )
{
	fix = raw;
}

float Fixed::toFloat( void ) const
{
	int intPart = fix >> frac;
	int fracPart = fix & ((1 << frac) - 1);
	float floatValue = static_cast<float>(intPart);
	float fractionalValue = static_cast<float>(fracPart) / (1 << frac);
	return floatValue + fractionalValue;
}

int Fixed::toInt( void ) const
{
	return fix >> frac;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}