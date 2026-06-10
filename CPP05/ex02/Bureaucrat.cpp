/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:42 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/08 17:27:30 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

/**************** OCF ****************/
Bureaucrat::Bureaucrat(const std::string& name, int grade)
    : _name(name),
      _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : _name(other._name),
      _grade(other._grade)
{}

// _name is const — cannot be reassigned
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
        _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

/**************** nested classes ****************/
// what() is defined in exception class as virtual method
// so it looks at the actual type of the object, not the type of the variable
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high (minimum is 1)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low (maximum is 150)";
}

/**************** member functions ****************/
const std::string&  Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);
}

void Bureaucrat::incrementGrade() {
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
    // std::cout << "Grade increased to: " << _grade << std::endl;
}

void Bureaucrat::decrementGrade() {
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
    // std::cout << "Grade decremented to: " << _grade << std::endl;
}

/**************** functions ****************/
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return (os);
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't sign "
                  << form.getName() << " because " <<  e.what() << '\n';
    }
    
}
