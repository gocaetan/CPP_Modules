#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
	std::cout << this->name << " spawned without a weapon" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " destroyed!" << std::endl;
}

void HumanB::attack()
{
	if(this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon to attack" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}