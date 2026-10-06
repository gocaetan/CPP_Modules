#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int health;
		int energy;
		int damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		bool canAct() const;
};