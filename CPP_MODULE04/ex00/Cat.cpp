#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Miau" << std::endl;
}