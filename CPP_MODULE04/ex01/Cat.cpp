#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
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
	delete this->brain;
	std::cout << "Cat has been destroyed" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Miau" << std::endl;
}

Brain *Cat::getBrain()const
{
	return this->brain;
}