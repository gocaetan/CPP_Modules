#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon " << this->type << " has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << this->type << " has been destroyed" << std::endl;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

const std::string &Weapon::getType()
{
	return(this->type);
}