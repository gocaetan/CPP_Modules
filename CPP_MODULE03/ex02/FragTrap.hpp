#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &other);

		void attack(const std::string& target);
		void highFivesGuys();
};