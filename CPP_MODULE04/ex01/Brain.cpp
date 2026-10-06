#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	this->type = "Brain";
}
Brain::Brain(const Brain &copy)
{
	this->type = copy.type;
}

Brain &Brain::operator=(const Brain &other)
{
	this->type = other.type;
	return(*this);
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed" << std::endl;
}