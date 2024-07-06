#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private :
		int fix;
		static const int frac = 8;

	public :
		Fixed ();
		Fixed (const int intVal);
		Fixed(const float floatVal);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);

		int getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed operator + (const Fixed &c) const;
		Fixed operator - (const Fixed &c) const;
		Fixed operator * (const Fixed &c) const;
		Fixed operator / (const Fixed &c) const;

		bool operator>(const Fixed &c) const;
		bool operator<(const Fixed &c) const;
		bool operator>=(const Fixed &c) const;
		bool operator<=(const Fixed &c) const;
		bool operator==(const Fixed &c) const;
		bool operator!=(const Fixed &c) const;

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int c);
		Fixed operator--(int c);

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif