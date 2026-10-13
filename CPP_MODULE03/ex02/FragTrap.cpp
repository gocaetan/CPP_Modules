#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "Default constructor" << std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
 	std::cout << "FragTrap " << this->name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap " << this->name << " copy constructed!" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if(this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap " << this->name << "  copy assigned!" << std::endl;
	return(*this);
}

void FragTrap::attack(const std::string& target)
{
	if(!ClapTrap::canAct())
	{
		std::cout << "No energy or health to attack" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
	this->energy--;
	return;
}
void FragTrap::highFivesGuys()
{
	if(!ClapTrap::canAct())
	{
		std::cout << "FragTrap " << this->name << " can't high five because he has no energy or health left" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " high fived 5 guys" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}