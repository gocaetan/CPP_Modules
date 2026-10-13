#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "Default constructor" << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
 	std::cout << "ScavTrap " << this->name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap " << this->name << " copy constructed!" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if(this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap " << this->name << " copy assigned!" << std::endl;
	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	if(!ClapTrap::canAct())
	{
		std::cout << "No energy or health to attack" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
	this->energy--;
	return;
}
void ScavTrap::guardGate()
{
	if(!ClapTrap::canAct())
	{
		std::cout << "ScavTrap " << this->name << " can't guard his gate because he has no energy or health left" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " guarded his gate" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destroyed" << std::endl;
}