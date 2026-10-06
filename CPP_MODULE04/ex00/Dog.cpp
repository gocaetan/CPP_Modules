#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    *this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "Woof!!" << std::endl;
}