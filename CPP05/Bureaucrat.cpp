/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:42 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/03 17:59:21 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* OCF */
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
    : _name(name)
{
    
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : _name(other._name)
{
    
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    
}

Bureaucrat::~Bureaucrat() {}

/* member functions */
const std::string&  Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void incrementGrade();
void decrementGrade();

/* functions */
