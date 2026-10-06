# include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombieheap = new Zombie(name);
	return (zombieheap);
}