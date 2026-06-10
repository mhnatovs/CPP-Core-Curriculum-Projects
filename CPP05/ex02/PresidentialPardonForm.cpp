/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 18:21:09 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/10 14:15:48 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
        : AForm("PresidenialPardon", 25, 45),
          _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
        : AForm("PresidenialPardon", 25, 45),
          _target(other._target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const&other)
{
    if (this != &other)
        AForm::operator = (other);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm PresidentialPardonForm::getTarget() const
{
    return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::cout << getTarget() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
