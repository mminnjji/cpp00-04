#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fix = 0;
}

Fixed::Fixed (const int intVal)
{
	fix = intVal << frac;
}

Fixed::Fixed(const float floatVal)
{
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
}

Fixed::Fixed(const Fixed& other)
{
	this->fix = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
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

Fixed Fixed::operator + (const Fixed &c) const
{
    return Fixed(this->toFloat() + c.toFloat());
}

Fixed Fixed::operator - (const Fixed &c) const
{
    return Fixed(this->toFloat() - c.toFloat());
}

Fixed Fixed::operator * (const Fixed &c) const
{
    return Fixed(this->toFloat() * c.toFloat());
}

Fixed Fixed::operator / (const Fixed &c) const
{
    return Fixed(this->toFloat() / c.toFloat());
}

bool Fixed::operator>(const Fixed &c) const
{
	return (this->getRawBits() > c.getRawBits());
}

bool Fixed::operator<(const Fixed &c) const
{
	return (this->getRawBits() < c.getRawBits());
}

bool Fixed::operator>=(const Fixed &c) const
{
	return (this->getRawBits() >= c.getRawBits());
}

bool Fixed::operator<=(const Fixed &c) const
{
	return (this->getRawBits() <= c.getRawBits());
}

bool Fixed::operator==(const Fixed &c) const
{
	return (this->getRawBits() == c.getRawBits());
}

bool Fixed::operator!=(const Fixed &c) const
{
	return (this->getRawBits() > c.getRawBits());
}

Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (copy);
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (copy);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;	
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;	
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}