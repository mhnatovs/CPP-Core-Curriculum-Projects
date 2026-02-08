#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:

	Contact	arr[8];
	int		currentIndex;
	int		count;

	void printContacts(int index) const;

	public:

	PhoneBook();

	void addContact();
	void searchContact();
};

#endif