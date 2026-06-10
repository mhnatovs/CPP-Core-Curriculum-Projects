/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:38:45 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/09 18:55:14 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
        : AForm("ShrubberyCreation", 145, 137),
          _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
        : AForm("ShrubberyCreation", 145, 137),
          _target(other._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const&other)
{
	if (this != &other)
        AForm::operator = (other);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::checkExecution(executor);
	std::ofstream file(_target + "_shrubbery");
	file << "                             ##^^##     \n";
	file << "          *                ^## # ###^   \n";
	file << "         ***          @@  ^## #  ## #^  \n";
	file << "        *****        @@@@   #  ()  #    \n";
	file << "       *******      @@@@@@     ()       \n";
	file << "      *********      @@@@      ()       \n";
	file << "     ***********      ||       ()       \n";
	file << "    *************     ||       ()       \n";
	file << "         ||||         ||       ()       \n";
	file << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
}
