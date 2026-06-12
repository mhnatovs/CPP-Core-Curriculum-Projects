/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 18:21:09 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/12 13:27:08 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
        : AForm("PresidentialPardon", 25, 5),
          _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
        : AForm("PresidentialPardon", 25, 5),
          _target(other._target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const&other)
{
    if (this != &other)
        AForm::operator = (other);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
