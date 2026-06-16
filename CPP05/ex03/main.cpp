/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:32 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/16 15:21:55 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

#define RESET "\033[0m"
#define YELLOW "\033[33m"

int main()
{
    std::srand(std::time(0));
//------------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * ShrubberyCreationForm *\n" << RESET;
        Intern someRandomIntern;
        AForm *form = someRandomIntern.makeForm("shrubbery creation", "form-1");
        if (form)
        {
            std::cout << *form << std::endl;
            delete form;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //------------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * RobotomyRequestForm *\n" << RESET;
        Intern someRandomIntern;
        AForm *form = someRandomIntern.makeForm("robotomy request", "form-1");
        if (form)
        {
            std::cout << *form << std::endl;
            delete form;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //------------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * PresidentalPardonForm *\n" << RESET;
        Intern someRandomIntern;
        AForm *form = someRandomIntern.makeForm("presidential pardon", "form-1");
        if (form)
        {
            std::cout << *form << std::endl;
            delete form;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //------------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Intern with invalid form name *\n" << RESET;
        Intern someRandomIntern;
        AForm *form = someRandomIntern.makeForm("presidentil pardon", "form-1");
        if (form)
        {
            std::cout << *form << std::endl;
            delete form;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //------------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Create, sign, execute *\n" << RESET;
        Intern someRandomIntern;
        Bureaucrat b("Boss", 150);
        AForm *form = someRandomIntern.makeForm("presidential pardon", "target");
        if (form)
        {
            b.signForm(*form);
            b.executeForm(*form);
            std::cout << *form << std::endl;
            delete form;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
//------------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Intern creates multiple forms *\n" << RESET;
        Intern someRandomIntern;
        AForm *form = someRandomIntern.makeForm("presidential pardon", "target");
        if (form)
        {
            std::cout << *form << std::endl;
            delete form;
        }
        AForm *form1 = someRandomIntern.makeForm("robotomy request", "target");
        if (form1)
        {
            std::cout << *form1 << std::endl;
            delete form1;
        }
        AForm *form2 = someRandomIntern.makeForm("shrubbery creation", "target");
        if (form2)
        {
            std::cout << *form2 << std::endl;
            delete form2;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << '\n';
    return (0);
}
