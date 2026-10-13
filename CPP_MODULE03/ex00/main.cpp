#include "ClapTrap.hpp"

int main()
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;

    ClapTrap bob("Bob");
	ClapTrap bob_default;

    std::cout << "\n===== ATTACK =====" << std::endl;

    bob.attack("Enemy");

    std::cout << "\n===== DAMAGE / REPAIR =====" << std::endl;

    bob.takeDamage(5);
    bob.beRepaired(5);
	
	// //No health
	// bob.takeDamage(10);
	// bob.beRepaired(2);
	// bob.attack("E");
	
	
	//No energy
	for(int i =0; i < 10; i++)
		bob.beRepaired(2);
	bob.attack("A");
	

    std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

    ClapTrap copy(bob);
    copy.attack("Another Enemy");

    std::cout << "\n===== ASSIGNMENT OPERATOR =====" << std::endl;

    ClapTrap assigned("Assigned");
    assigned = bob;
    assigned.attack("Enemy");

    std::cout << "\n===== DESTRUCTION =====" << std::endl;

    return 0;
}
