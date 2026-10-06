#include "Fixed.hpp"

Fixed::Fixed(): rawVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawVal = value << fractbits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawVal = roundf(value * 256);
}

float Fixed::toFloat(void) const
{
	return (float)this->rawVal / 256;
}

int Fixed::toInt(void) const
{
	return this->rawVal >> this->fractbits;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->rawVal = copy.rawVal;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->rawVal = other.rawVal;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->rawVal;
}

void Fixed::setRawBits(int const raw)
{
	this->rawVal = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->rawVal > other.rawVal);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->rawVal < other.rawVal);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->rawVal <= other.rawVal);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->rawVal >= other.rawVal);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->rawVal == other.rawVal);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->rawVal != other.rawVal);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed res;

	res.setRawBits(this->rawVal + other.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed res;

	res.setRawBits(this->rawVal - other.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed res;

	res.setRawBits((this->rawVal * other.getRawBits()) >> this->fractbits);
	return(res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed res;

	res.setRawBits((this->rawVal << this->fractbits) / other.getRawBits());
	return(res);
}

Fixed &Fixed::operator++()
{
	this->rawVal++;
	return(*this);
}

Fixed &Fixed::operator--()
{
	this->rawVal--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;

	temp = *this;
	this->rawVal++;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;

	temp = *this;
	this->rawVal--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a < b)
		return(a);
	return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a > b)
		return(a);
	return(b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a < b)
		return(a);
	return(b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a > b)
		return(a);
	return(b);
}