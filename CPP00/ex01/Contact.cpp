/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:24:19 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/04/30 18:59:40 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const
{
	return (firstName);
}

std::string Contact::getLastName() const
{
	return (lastName);
}

std::string Contact::getNickName() const
{
	return (nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string Contact::getSecret() const
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
