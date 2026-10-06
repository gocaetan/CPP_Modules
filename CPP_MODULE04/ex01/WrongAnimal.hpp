#include <string>
#include <iostream>
#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal &other);
		~WrongAnimal();

		virtual void makeSound() const;
		std::string getType() const;
};

#endif