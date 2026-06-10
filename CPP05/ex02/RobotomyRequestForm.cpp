/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:21:56 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/10 13:31:01 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
        : AForm("RobotomyRequest", 72, 45),
          _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
        : AForm("RobotomyRequest", 72, 45),
          _target(other._target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const&other)
{
    if (this != &other)
        AForm::operator = (other);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm RobotomyRequestForm::getTarget() const
{
    return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << RobotomyRequestForm::getTarget() << " has been robotomized successfully 50%% of the time" << std::endl;
}
