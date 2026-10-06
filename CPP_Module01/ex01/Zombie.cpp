#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Default zombie created!" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}