#include "phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), count(0)
{
}

void PhoneBook::AddContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNum, std::string darkestSecret)
{
	if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNum.empty() || darkestSecret.empty())
	{
		std::cout << "Fields cannot be empty." << std::endl;
		return;
	}
	contacts[index].setContact(firstName, lastName, nickName, phoneNum, darkestSecret);
	index = (index + 1) % 8;
	if(count < 8)
		count++;
}

bool PhoneBook::IsValidIndex(int id)
{
	return id >= 0 && id < count;
}

std::string PhoneBook::FormatField(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
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
		std::cout << std::right << std::setw(10) << FormatField(contacts[i].GetFirstName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << FormatField(contacts[i].GetLastName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << FormatField(contacts[i].GetNick());
		std::cout << "|" << std::endl;
	}
}

void PhoneBook::PrintContact(int id)
{
	contacts[id].Print();
}