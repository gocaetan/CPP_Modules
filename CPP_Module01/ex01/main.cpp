#include "Zombie.hpp"

int main()
{
	std::cout << "ZombieHorde creation" << std::endl;
	std::string name = "HordeZombie";
	int N = 5;
	Zombie* horde = zombieHorde(N, name);
	for(int i = 0;i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return(0);
}