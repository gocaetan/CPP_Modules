#include "ScavTrap.hpp"

int main()
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;

    ScavTrap bob("Shaka");
	ScavTrap bob_default;

    std::cout << "\n===== ATTACK =====" << std::endl;

    bob.attack("Enemy");

    std::cout << "\n===== DAMAGE / REPAIR =====" << std::endl;

    bob.beRepaired(20);
    bob.takeDamage(30);
	
	// //No health
	// bob.takeDamage(90);
	// bob.beRepaired(2);
	// bob.attack("E");
	
	// //No energy
	// for(int i = 0; i < 50; i++)
	// bob.beRepaired(2);
	// bob.attack("A");
	
    std::cout << "\n===== SPECIAL ABILITY =====" << std::endl;

    bob.guardGate();

    std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

    ScavTrap copy(bob);
    copy.attack("Another Enemy");

    std::cout << "\n===== ASSIGNMENT OPERATOR =====" << std::endl;

    ScavTrap assigned("Assigned");
    assigned = bob;
    assigned.attack("Enemy");

    std::cout << "\n===== DESTRUCTION =====" << std::endl;

    return 0;
}