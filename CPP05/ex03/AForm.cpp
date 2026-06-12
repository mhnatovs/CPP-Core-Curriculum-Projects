/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:27:49 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/11 14:06:05 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, const int toSign, const int toExec)
      : _name(name),
        _isSigned(false),
        _gradeToSign(toSign),
        _gradeToExec(toExec)
{
    if (toSign < 1 || toExec < 1)
        throw GradeTooHighException();
    if (toSign > 150 || toExec > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
      : _name(other._name),
        _isSigned(other._isSigned),
        _gradeToSign(other._gradeToSign),
        _gradeToExec(other._gradeToExec)
{}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
        _isSigned = other._isSigned;
    return (*this);
}

AForm::~AForm() {}

const std::string AForm::getName() const { return (_name); }

bool AForm::getSigned() const { return (_isSigned); }

int AForm::getGradeToSign() const { return (_gradeToSign); }

int AForm::getGradeToExec() const { return (_gradeToExec); }

void AForm::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > _gradeToSign)
        throw AForm::GradeNotHighEnoughException();
    _isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << f.getName()
       << ", signed: "        << (f.getSigned() ? "yes" : "no")
       << ", grade to sign: " << f.getGradeToSign()
       << ", grade to exec: " << f.getGradeToExec()
       << ".";
    return (os);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Form grade is too high (minimum is 1)";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Form grade is too low (maximum is 150)";
}

const char* AForm::GradeNotHighEnoughException::what() const throw()
{
    return "bureaucrat's grade is too low to sign this form";
}

const char* AForm::NotSignedException::what() const throw()
{
    return "form is not signed";
}

const char* AForm::GradeNotHighEnoughExceptionToExecute::what() const throw()
{
    return "grade is not enough to execute the form";
}

void AForm::checkExecution(Bureaucrat const& executor) const
{
    if (!getSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > getGradeToExec())
        throw AForm::GradeNotHighEnoughExceptionToExecute();
}
