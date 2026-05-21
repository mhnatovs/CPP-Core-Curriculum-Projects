/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:26 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/04 14:35:14 by mhnatovs         ###   ########.fr       */
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
	private:
		Contact	arr[MAX_CONTACTS];
		int		count;
		int		oldestIndex;

	public:
		void printTable() const;
		PhoneBook();
		void addContact();
		void searchContact();
};

#endif