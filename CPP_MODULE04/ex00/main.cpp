#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	const WrongAnimal *wrong = new WrongAnimal();
	const Animal *j = new Dog();
	const WrongAnimal *i = new WrongCat();
	const Animal *c = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << "\nSOUNDS:" << std::endl;
	i->makeSound();
	j->makeSound();
	c->makeSound();
	wrong->makeSound();
	std::cout << "\nDELETE ANIMALS:" << std::endl;
	delete wrong;
	delete i;
	delete j;
	delete c;
	return 0;
}