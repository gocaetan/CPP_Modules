#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor" << std::endl;
	this->type = "Animal";
}
Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound()const
{
	std::cout << "Animal sound" << std::endl;
}