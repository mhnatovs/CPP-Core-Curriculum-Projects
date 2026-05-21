/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:31 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/05 11:52:13 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RESET		"\033[0m"
#define BOLD		"\033[1m"
#define DIM			"\033[2m"
#define WHITE		"\033[37m"
#define BRED		"\033[91m"
#define BGREEN		"\033[92m"
#define BYELLOW		"\033[93m"
#define BMAGENTA	"\033[95m"
#define BCYAN		"\033[96m"
#define BWHITE		"\033[97m"

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void displayMenu(void);

int main()
{
	PhoneBook	book;
	std::string	input;

	displayMenu();
	while (1)
	{
		if (!std::getline(std::cin, input))
			return 1;
		if (input == "ADD" || input == "add")
			book.addContact();
		else if (input == "SEARCH" || input == "search")
			book.searchContact();
		else if (input == "EXIT" || input == "exit")
			return (0);
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << BYELLOW << "add/search/exit " << RESET;
	}
	return (0);
}

void displayMenu(void)
{
	std::cout << BMAGENTA << BOLD;
	std::cout << "  -------------------------" << std::endl;
	std::cout << " |  ";
	std::cout << BYELLOW << "* " << BWHITE << "P H O N E B O O K" << BYELLOW << " *";
	std::cout << BMAGENTA << "  |" << std::endl;
	std::cout << "  -------------------------" << RESET << std::endl;
	std::cout << DIM << WHITE << "  # choose your action #" << RESET << std::endl;
	std::cout << BGREEN << BOLD << "  ADD" << RESET;
	std::cout << DIM << WHITE << "      - add new contact" << RESET << std::endl;
	std::cout << BCYAN << BOLD << "  SEARCH" << RESET;
	std::cout << DIM << WHITE << "   - find a contact" << RESET << std::endl;
	std::cout << BRED << BOLD << "  EXIT" << RESET;
	std::cout << DIM << WHITE << "     - quit program" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << BYELLOW << "  > " << RESET;
}
