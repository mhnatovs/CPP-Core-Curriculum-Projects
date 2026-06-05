/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:32 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/05 13:25:19 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#define RESET "\033[0m"
#define YELLOW "\033[33m"

int main()
{
    try
    {
        std::cout << YELLOW << "\n * No catch *\n" << RESET;
        Bureaucrat a("Mike", 10);
        Bureaucrat b("Nick", 50);
        Bureaucrat c("Min", 1);
        Bureaucrat d("Max", 150);
        a.decrementGrade();
        a.decrementGrade();
        a.decrementGrade();
        a.decrementGrade();
        a.decrementGrade();
        b.decrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << d << std::endl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
// -------------------------------------------------------------------
    std::cout << YELLOW << " * Assignment operator *" << RESET << std::endl;
    try
    {
        Bureaucrat a("A", 42);
        Bureaucrat b("B", 100);
        std::cout << b << std::endl;
        b = a;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
// -------------------------------------------------------------------
    std::cout << YELLOW << "\n * Copy constructor *" << RESET << std::endl;
    try
    {
        Bureaucrat a("Copy", 10);
        Bureaucrat b(a);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
// -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Incrementing 1 *\n" << RESET;
        Bureaucrat a("C", 1);
        a.incrementGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
// -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Decrementing 150 *\n" << RESET;
        Bureaucrat a("D", 150);
        a.decrementGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
// -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Initialization *\n" << RESET;
        Bureaucrat a("John", 0);
        Bureaucrat c("Bob", -200);
        Bureaucrat b("Jane", 200);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
// -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Initialization *\n" << RESET;
        Bureaucrat b("Jane", 200);
        Bureaucrat a("John", 0);
        Bureaucrat c("Bob", -200);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Initialization *\n" << RESET;
        Bureaucrat c("Bob", -200);
        Bureaucrat b("Jane", 200);
        Bureaucrat a("John", 0);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    return (0);
}
