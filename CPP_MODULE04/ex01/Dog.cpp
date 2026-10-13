#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return(*this);
}

Dog::~Dog()
{
	delete this->brain;	
	std::cout << "Dog has been destroyed" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "Woof!!" << std::endl;
}

Brain *Dog::getBrain()const
{
	return this->brain;
}