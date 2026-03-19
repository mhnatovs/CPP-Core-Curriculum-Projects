/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:26 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/03/19 16:42:06 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

class PhoneBook {
	private: //access specifier
		Contact	arr[8]; // members
		int		currentIndex;
		int		count;

		void printContacts(int index) const;

	public:
		PhoneBook();
		~PhoneBook();
		PhoneBook(const PhoneBook& other); // Copy constructor, creates new object
		PhoneBook& operator=(const PhoneBook& other); // operator, copies into already existing object

		void addContact();
		void searchContact();
};

#endif
// the scope operator (::, two colons)