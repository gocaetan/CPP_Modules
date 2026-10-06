#ifndef BRAIN_HPP
#define Brain_HPP

#include <string>
#include <iostream>
class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &other);
		~Brain();
};
#endif