/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:23 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/05 11:54:44 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

static std::string getInput(std::string prompt, bool onlyDigits);
static std::string truncate(const std::string &str);
static bool isNumber(const std::string &str);

PhoneBook::PhoneBook(): count(0), oldestIndex(0) {}

void PhoneBook::printTable() const
{
	std::cout   << std::setw(10) << "Index" << "|"
					<< std::setw(10) << "Firstname" << "|"
					<< std::setw(10) << "Lastname" << "|"
					<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << truncate(arr[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(arr[i].getLastName()) << "|"
                  << std::setw(10) << truncate(arr[i].getNickName()) << std::endl;
    }
}

void PhoneBook::addContact()
{
	Contact		newContact;

	newContact.setFirstName(getInput("Input first name: ", false));
	newContact.setLastName(getInput("Input last name: ", false));
	newContact.setNickName(getInput("Input nickname: ", false));
	newContact.setPhoneNumber(getInput("Input phone number: ", true));
	newContact.setSecret(getInput("Input darkest secret: ", false));
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
	std::cout << "Enter index from 1 to " << count << ": ";
	std::getline(std::cin, indexStr);
	if (indexStr.empty() || indexStr.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Invalid index!\n";
		return ;
	}
	std::istringstream ss(indexStr);
	if (!(ss >> index) || index < 1 || index > 8)
	{
		std::cout << "Invalid index!\n";
		return ;
	}
	std::cout << "\nFirst name:     " << arr[index - 1].getFirstName() << "\n";
	std::cout << "Last name:      " << arr[index - 1].getLastName() << "\n";
	std::cout << "Nickname:       " << arr[index - 1].getNickName() << "\n";
	std::cout << "Phone number:   " << arr[index - 1].getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << arr[index - 1].getSecret() << "\n\n";
}

static std::string getInput(std::string prompt, bool onlyDigits = false)
{
    std::string value;

    while (true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, value))
            return std::string();

        if (value.empty())
        {
            std::cout << "Field cannot be empty!\n";
            continue;
        }

        if (onlyDigits && !isNumber(value))
        {
            std::cout << "Must contain only digits!\n";
            continue;
        }

        return value;
    }
}

static std::string truncate(const std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

static bool isNumber(const std::string &str)
{
	return (!str.empty() && str.find_first_not_of("0123456789") == std::string::npos);
}
