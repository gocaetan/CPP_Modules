#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor" << std::endl;
}
ClapTrap::ClapTrap(std::string name):health(10), energy(10), damage(0)
{
	this->name = name;
	std::cout << "ClapTrap" << this->name << "created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->health = copy.health;
	this->energy = copy.energy;
	this->damage = copy.damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->damage = other.damage;
	return(*this);
}

bool ClapTrap::canAct() const
{
	return(energy > 0 && health > 0);
}

void ClapTrap::attack(const std::string& target)
{
	if(!canAct())
	{
		std::cout << "No energy or health to attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
	this->energy--;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " of damage!" << std::endl;
	health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(!canAct())
	{
		std::cout << "No energy or health to be repaired" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " repairs itself with " << amount << " of health points" << std::endl;
	health += amount;
	this->energy--;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"ClapTrap " << this->name << " destroyed" << std::endl;
}