/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:32 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/12 13:24:51 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

#define RESET "\033[0m"
#define YELLOW "\033[33m"

int main()
{
    std::srand(std::time(0));// initialising of generator
//------------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * ShrubberyCreationForm-success *\n" << RESET;
        Bureaucrat b("Ben", 1);
        ShrubberyCreationForm form("shrubbery-s");
        std::cout << b << std::endl << form << std::endl;
        b.signForm(form);
        std::cout << form << std::endl;
        b.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //--------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * ShrubberyCreationForm-fail *\n" << RESET;
        Bureaucrat b("Ben", 150);
        ShrubberyCreationForm form("shrubbery-f");
        std::cout << b << std::endl << form << std::endl;
        b.signForm(form);
        std::cout << form << std::endl;
        b.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //---------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * ShrubberyCreationForm-fail *\n" << RESET;
        Bureaucrat b("Ben", 139);
        ShrubberyCreationForm form("shrubbery-f");
        std::cout << b << std::endl << form << std::endl;
        b.signForm(form);
        std::cout << form << std::endl;
        b.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //---------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * RobotomyRequestForm-success x10 *\n" << RESET;
        Bureaucrat b("Ben", 10);
        RobotomyRequestForm form("robotomy-s");
        b.signForm(form);
        std::cout << form << std::endl;
        for (int i = 0; i < 10; i++)
            b.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //---------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * PresidentialPardonForm-success *\n" << RESET;
        Bureaucrat b("Ben", 1);
        PresidentialPardonForm form("pardon-s");
        b.signForm(form);
        std::cout << form << std::endl;
        b.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //---------------------------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * PresidentialPardonForm-fail *\n" << RESET;
        Bureaucrat b("Ben", 26);
        PresidentialPardonForm form("pardon-f");
        b.signForm(form);
        std::cout << form << std::endl;
        b.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << '\n';
    return (0);
}
