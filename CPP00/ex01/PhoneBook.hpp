/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:26 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/04/30 19:00:19 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <sstream>

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

class PhoneBook {
	private: //access specifier
		Contact	arr[MAX_CONTACTS]; // members
		int		count;
		int		oldestIndex;

	public:
		void printTable() const;
		PhoneBook();
		// PhoneBook(const PhoneBook& other); // Copy constructor, creates new object
		// PhoneBook& operator=(const PhoneBook& other); // operator, copies into already existing object

		void addContact();
		void searchContact();
};

#endif
// оператор scope resolution (::, two colons)