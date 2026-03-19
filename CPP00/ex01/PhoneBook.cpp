#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>

void PhoneBook::printContacts(int index) const
{

}

PhoneBook::PhoneBook() {};

void PhoneBook::addContact()
{
	Contact		newContact;
	std::string	value;

	std::cout << "Input first name: ";
	std::getline(std::cin, value);
	newContact.setFirstName(value);
	std::cout << "Input last name: ";
	std::getline(std::cin, value);
	newContact.setLastName(value);
	std::cout << "Input nickname: ";
	std::getline(std::cin, value);
	newContact.setNickname(value);
	std::cout << "Input phonenumber: ";
	std::getline(std::cin, value);
	newContact.setPhoneNumber(value);
	std::cout << "Input darkest secret: ";
	std::getline(std::cin, value);
	newContact.setDarkestSecret(value);
}

void PhoneBook::searchContact()
{

}
