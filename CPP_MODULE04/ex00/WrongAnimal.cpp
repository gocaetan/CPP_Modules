#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor" << std::endl;
	this->type = "WrongAnimal";
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound()const
{
	std::cout << "WrongAnimal sound" << std::endl;
}