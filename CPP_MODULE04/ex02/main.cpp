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
	std::cout << "CREATE ANIMALS" << std::endl;

	Dog dog;
	Cat cat;
	//Animal a;

	std::cout << "\nMAKE SOUNDS" << std::endl;

	dog.makeSound();
	cat.makeSound();

	std::cout << "\nPOLYMORPHISM" << std::endl;

	Animal *animal1 = new Dog();
	Animal *animal2 = new Cat();

	animal1->makeSound();
	animal2->makeSound();

	std::cout << "\nDELETE ANIMALS" << std::endl;

	delete animal1;
	delete animal2;

	return 0;
}