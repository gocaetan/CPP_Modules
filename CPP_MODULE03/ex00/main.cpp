#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	bob.attack("Enemy");
	bob.takeDamage(9);
	bob.beRepaired(9);
	bob.takeDamage(2);

	ClapTrap copy(bob);
	copy.attack("AnotherEnemy");

	ClapTrap assigned("Assigned");
	assigned = bob;
	assigned.attack("Enemy");

	return 0;
}
