/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:19 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/03/19 16:38:07 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void set_values(std::string f_name, std::string l_name, std::string n_name, std::string ph_num, std::string secret)
{
	Contact	c;

	c.setFirstName(f_name);
	c.setLastName(l_name);
	c.setNickName(n_name);
	c.setPhoneNumber(ph_num);
	c.setSecret(secret);
}

std::string Contact::getFirstName()
{
	return (firstName);
}

std::string Contact::getLastName()
{
	return (lastName);
}

std::string Contact::getNickName()
{
	return (nickName);
}

std::string Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string Contact::getSecret()
{
	return (darkestSecret);
}

void Contact::setFirstName(const std::string &str)
{
	firstName = str;
}

void Contact::setLastName(const std::string &str)
{
	lastName = str;
}

void Contact::setNickName(const std::string &str)
{
	nickName = str;
}

void Contact::setPhoneNumber(const std::string &str)
{
	phoneNumber = str;
}

void Contact::setSecret(const std::string &str)
{
	darkestSecret = str;
}