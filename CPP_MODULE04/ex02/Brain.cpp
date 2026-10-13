#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}
Brain::Brain(const Brain &copy)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	if(this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if(index >= 100)
		return "Sorry I forgot";
	return this->ideas[index];
}

void Brain::setIdea(int index, std::string idea)
{
	if(index >= 100)
	{
		std::cout << "I have no more ideas" << std::endl;
		return;
	}
	this->ideas[index] = idea;
}
