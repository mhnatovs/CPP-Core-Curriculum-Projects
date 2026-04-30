/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:23 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/04/30 19:00:13 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

static std::string getInput(std::string prompt);
static std::string truncate(std::string str);

PhoneBook::PhoneBook(): count(0), oldestIndex(0) {}

void PhoneBook::printTable() const
{
	std::cout   << std::setw(10) << "Index" << "|"
					<< std::setw(10) << "Firstname" << "|"
					<< std::setw(10) << "Lastname" << "|"
					<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(arr[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(arr[i].getLastName()) << "|"
                  << std::setw(10) << truncate(arr[i].getNickName()) << std::endl;
    }
}

void PhoneBook::addContact()
{
	Contact		newContact;

	newContact.setFirstName(getInput("Input first name: "));
	newContact.setLastName(getInput("Input last name: "));
	newContact.setNickName(getInput("Input nickname: "));
	newContact.setPhoneNumber(getInput("Input phone number: "));
	newContact.setSecret(getInput("Input darkest secret: "));
	if (count < MAX_CONTACTS)
	{
		arr[count] = newContact;
		count++;
	}
	else
	{
		arr[oldestIndex] = newContact;
		oldestIndex = (oldestIndex + 1) % MAX_CONTACTS;
	}
}

void PhoneBook::searchContact()
{
	std::string	indexStr;
	int			index;
	
	if (count == 0)
	{
		std::cout << "Phonebook is empty!\n";
		return ;
	}
	printTable();
	std::cout << "Enter index: ";
	std::getline(std::cin, indexStr);
	if (indexStr.empty() || indexStr.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Invalid indexx!\n";
		return ;
	}
	std::istringstream ss(indexStr);
	if (!(ss >> index))
	{
		std::cout << "Invalid index!\n";
		return ;
	}
	std::cout << "First name:     " << arr[index].getFirstName() << "\n";
	std::cout << "Last name:      " << arr[index].getLastName() << "\n";
	std::cout << "Nickname:       " << arr[index].getNickName() << "\n";
	std::cout << "Phone number:   " << arr[index].getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << arr[index].getSecret() << "\n";
}

static std::string getInput(std::string prompt)
{
	std::string value;

	while(value.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, value);
		if (value.empty())
			std::cout << "Field cannot be empty!\n";
	}
	return (value);
}

static std::string truncate(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}
