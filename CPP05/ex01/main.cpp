/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:32 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/05 16:12:46 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define RESET "\033[0m"
#define YELLOW "\033[33m"

int main()
{
    try
    {
        std::cout << YELLOW << "\n * No catch *\n" << RESET;
        Form a("Form_A", true, 1, 2);
        Form b("Form_B", false, 3, 4);
        Form c("Form_C", true, 150, 150);
        Form d("Form_D", false, 1, 1);
        
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
        Form a("Form_A", true, 1, 2);
        Form b("Form_B", false, 3, 4);

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
        Form a("Form_A", true, 1, 2);

        Form b(a);
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
        std::cout << YELLOW << "\n * *** *\n" << RESET;
        Form a("Form_A", true, 1, 2);
        Bureaucrat b("Nick", 10);
        a.beSigned(b);
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
        Form a("Form_A", 1, 151, 1);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
// -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Initialization *\n" << RESET;
        Form a("Form_A", 1, 151, 0);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
// -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Initialization *\n" << RESET;
        Form a("Form_A", 1, 8, 0);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Initialization *\n" << RESET;
        Form a("Form_A", 0, 2000, 1);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    return (0);
}
