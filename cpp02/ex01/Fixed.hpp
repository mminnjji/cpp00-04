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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif