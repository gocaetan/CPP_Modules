#include "FragTrap.hpp"

int main()
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;

    FragTrap bob("Fragger");
	FragTrap bob_default;

    std::cout << "\n===== ATTACK =====" << std::endl;

    bob.attack("Enemy");

    std::cout << "\n===== DAMAGE / REPAIR =====" << std::endl;

    bob.takeDamage(30);
    bob.beRepaired(20);

	/*
	//No health
	bob.takeDamage(90);
	bob.attack("A");
	bob.beRepaired(1);
	*/
	/*
	*/
	//No energy
	for(int i = 0; i < 100; i++)
		bob.attack("B");
	bob.beRepaired(1);

    std::cout << "\n===== SPECIAL ABILITY =====" << std::endl;

    bob.highFivesGuys();

    std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

    FragTrap copy(bob);
    copy.attack("Another Enemy");

    std::cout << "\n===== ASSIGNMENT OPERATOR =====" << std::endl;

    FragTrap assigned("Assigned");
    assigned = bob;
    assigned.attack("Enemy");

    std::cout << "\n===== DESTRUCTION =====" << std::endl;

    return 0;
}