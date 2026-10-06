#include "ScavTrap.hpp"

int main()
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;

    ScavTrap bob("Bob");

    std::cout << "\n===== ATTACK =====" << std::endl;

    bob.attack("Enemy");

    std::cout << "\n===== DAMAGE / REPAIR =====" << std::endl;

    bob.takeDamage(30);
    bob.beRepaired(20);

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