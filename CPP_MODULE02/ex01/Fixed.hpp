#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
class Fixed
{
	private:
		int rawVal;
		static const int fractbits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits( int const raw );
		Fixed(const int value);
		Fixed(const float value);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif