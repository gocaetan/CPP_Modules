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
	std::cout << "===== TEST 1: BRAIN IDEAS =====" << std::endl;

	Dog original;
	original.getBrain()->setIdea(0, "I love C++");
	original.getBrain()->setIdea(1, "I love 42");

	std::cout << "Idea 0: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Idea 1: " << original.getBrain()->getIdea(1) << std::endl;

	std::cout << "\n===== TEST 2: DEEP COPY =====" << std::endl;

	Dog copy(original);

	std::cout << "Original: "
		<< original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy: "
		<< copy.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n===== TEST 3: INDEPENDENCE =====" << std::endl;

	copy.getBrain()->setIdea(0, "I love 42");

	std::cout << "Original after change: "
		<< original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy after change: "
		<< copy.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n===== TEST 4: ASSIGNMENT =====" << std::endl;

	Dog assigned;
	assigned = original;

	assigned.getBrain()->setIdea(0, "New idea");

	std::cout << "Original: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Assigned: " << assigned.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n===== END OF TESTS =====" << std::endl;

	return 0;
}