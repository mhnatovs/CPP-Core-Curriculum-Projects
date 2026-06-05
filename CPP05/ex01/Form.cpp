/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:27:49 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/05 15:57:49 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, bool isSigned, const int toSign, const int toExec)
      : _name(name),
        _isSigned(isSigned),
        _gradeToSign(toSign),
        _gradeToExec(toExec)
{
    if (toSign < 1 || toExec < 1)
        throw GradeTooHighException();
    if (toSign > 150 || toExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other)
      : _name(other._name),
        _isSigned(other._isSigned),
        _gradeToSign(other._gradeToSign),
        _gradeToExec(other._gradeToExec)
{}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        _isSigned = other._isSigned;
    return (*this);
}

Form::~Form() {}

const std::string Form::getName() const { return (_name); }

bool Form::getSigned() const { return (_isSigned); }

int Form::getGradeToSign() const { return (_gradeToSign); }

int Form::getGradeToExec() const { return (_gradeToExec); }

void Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << f.getName() <<", signed: "
       << (f.getSigned() ? "yes" : "no")
       << ", grade to sign: "
       << f.getGradeToSign()
       << ", grade to execute: "
       << f.getGradeToExec()
       << ".";
    return (os);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form grade is too high (minimum is 1)";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form grade is too high (maximum is 150)";
}
