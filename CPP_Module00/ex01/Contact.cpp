#include "Contact.hpp"
#include <iostream>
void Contact::setContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

std::string Contact::GetNick()
{
	return nickName;
}

std::string Contact::GetFirstName()
{
	return firstName;
}

std::string Contact::GetLastName()
{
	return lastName;
}

void Contact::Print()
{
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickName << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}