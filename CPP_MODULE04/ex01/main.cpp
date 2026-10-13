#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[10];
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
		Dog super_maxi;
		Cat gato_noir;
		super_maxi.getBrain()->setIdea(i, "Dog idea: ");
		gato_noir.getBrain()->setIdea(i, "Cat Idea: ");
		std::cout << super_maxi.getBrain()->getIdea(i) << i + 1 << std::endl;
		std::cout << gato_noir.getBrain()->getIdea(i) << i  + 1<< std::endl;
	}
	std::cout << "\nDEEP COPY" << std::endl;
	Dog original;
	original.getBrain()->setIdea(0, "Original idea");
	Dog copy(original);
	std::cout << original.getBrain()->getIdea(0) << std::endl;
	std::cout << copy.getBrain()->getIdea(0) << std::endl;
	std::cout << "\nAFTER MODIFICATION" << std::endl;
	copy.getBrain()->setIdea(0, "Copy idea");
	std::cout << original.getBrain()->getIdea(0) << std::endl;
	std::cout << copy.getBrain()->getIdea(0) << std::endl;
	std::cout << "\nDELETE ANIMALS" << std::endl;
	for(int i = 0; i < 10; i++)
		delete animals[i];
}