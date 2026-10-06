#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):name(name), weapon(weapon)
{
	std::cout << this->name << " has been spawned with a weapon" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}