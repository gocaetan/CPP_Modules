#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
	
class Zombie
{
	private: 
		std:: string name;
	public: 
		Zombie(std::string name);
		Zombie( void );
		~Zombie();
		void announce(void);
		void setName(std::string Name);
};
Zombie* zombieHorde( int N, std::string name );
#endif