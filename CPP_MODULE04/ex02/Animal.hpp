#include <string>
#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};

#endif