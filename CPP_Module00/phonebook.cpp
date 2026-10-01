#include "phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), count(0)
{
}

void PhoneBook::AddContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNum, std::string darkestSecret)
{
	contacts[index].setContact(firstName, lastName, nickName, phoneNum, darkestSecret);
	index = (index + 1) % 8;
	if(count < 8)
		count++;
}

void PhoneBook::ShowTable()
{
	std::cout << std::right << std::setw(10) << "INDEX";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "FIRST NAME";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "LAST NAME";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "NICK";
	std::cout << "|" << std::endl;
	for(int i = 0; i < count; i++)
	{
		std::cout << std::right << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << contacts[i].GetFirstName();
		std::cout << "|";
		std::cout << std::right << std::setw(10) << contacts[i].GetLastName();
		std::cout << "|";
		std::cout << std::right << std::setw(10) << contacts[i].GetNick();
		std::cout << "|" << std::endl;
	}
}

void PhoneBook::PrintContact(int id)
{
	contacts[id].Print();
}