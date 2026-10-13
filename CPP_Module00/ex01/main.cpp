#include "phonebook.hpp"
#include <iostream>
#include <string>

int main()
{
	PhoneBook phonebook;
	std:: string command;

	while(true)
	{
		std:: cout << "Command ";
		std:: getline(std::cin, command);
		if(std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		std::string First;
		std::string Last;
		std::string Nick;
		std::string Number;
		std::string Secret;
		if(command == "ADD")
		{
			std::cout << "Pls enter your first name: ";
			std:: getline(std::cin, First);
			std::cout << "Pls enter your last name: ";
			std:: getline(std::cin, Last);
			std::cout << "Pls enter your nick name: ";
			std:: getline(std::cin, Nick);
			std::cout << "Pls enter your phone number : ";
			std:: getline(std::cin, Number);
			std::cout << "Pls enter your darkest Secret: ";
			std:: getline(std::cin, Secret);
			phonebook.AddContact(First, Last, Nick, Number, Secret);
		}
		if(command == "SEARCH")
		{
			phonebook.ShowTable();

			std::string input;

			std::cout << "Enter index: ";
			std::getline(std::cin, input);

			if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
			{
				int id = input[0] - '0';

				if (phonebook.IsValidIndex(id))
					phonebook.PrintContact(id);
				else
					std::cout << "Invalid index." << std::endl;
			}
		}
		if(command == "EXIT")
			break;
	}
}