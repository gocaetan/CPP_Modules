#include "Fixed.hpp"

Fixed::Fixed(): rawVal(0)
{
	std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	this->rawVal = copy.rawVal;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->rawVal = other.rawVal;
	return(*this);
}

Fixed::~Fixed()
{
	std::cout << "Fixed has been destroyed" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->rawVal;
}

void Fixed::setRawBits( int const raw )
{
	this->rawVal = raw;
}