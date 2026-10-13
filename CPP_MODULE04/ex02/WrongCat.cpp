#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed" << std::endl;
}

void WrongCat::makeSound()const
{
	std::cout << "Wrong Miau" << std::endl;
}