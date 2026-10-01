#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int index;
		int count;
	public:
		void AddContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNum, std::string darkestSecret);
		void PrintContact(int id);
		void ShowTable();
		PhoneBook();
};
#endif