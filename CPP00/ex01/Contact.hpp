/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:13 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/03/19 16:38:56 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
		
	public:
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getSecret();
		void setFirstName(const std::string &str);
		void setLastName(const std::string &str);
		void setNickName(const std::string &str);
		void setPhoneNumber(const std::string &str);
		void setSecret(const std::string &str);
};

void set_values(std::string f_name, std::string l_name, std::string n_name, std::string ph_num, std::string secret);

#endif