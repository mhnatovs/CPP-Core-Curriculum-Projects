/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:32 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/08 13:40:38 by mhnatovs         ###   ########.fr       */
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
        std::cout << YELLOW << "\n * Grade's initialization *\n" << RESET;
        Form a("Form_123", 1, 150);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // ----------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Grade's initialization with less than 1 *\n" << RESET;
        Form a("Form_A", 1, -1);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Grade's initialization with more than 150 *\n" << RESET;
        Form a("Form_A", 20, 300);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // ------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Grade's initialization with less than 1 *\n" << RESET;
        Form a("Form_A", 0, 1);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // -------------------------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Grade's initialization with more than 150 *\n" << RESET;
        Form a("Form_A", 2000, 1);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // ------------------------------------------------------------------
    try {
    std::cout << YELLOW << "\n * signForm and assignment operator *\n" << RESET;
    Form a("Form_123", 50, 50);
    Form b("Form_1234", 60, 5);
    Bureaucrat nick("Nick", 30);
    nick.signForm(a);
    std::cout << b << std::endl;
    std::cout << a << std::endl;
    b = a;
    std::cout << b << std::endl;
    } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
    }
    // ------------------------------------------------------------------

    try {
    std::cout << YELLOW << "\n * signForm fail *\n" << RESET;
    Form f("Form_123", 10, 10);
    Bureaucrat b("Nick", 11);
    b.signForm(f);  // "couldn't sign because..."
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    // ------------------------------------------------------------------

    try {
    std::cout << YELLOW << "\n * signForm exact grade *\n" << RESET;
    Form f("Form_55", 10, 10);
    Bureaucrat b("Nick", 10);
    b.signForm(f);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    // ---------------------------------------------------
    try
    {
        std::cout << YELLOW << "\n * Copy constructor *\n" << RESET;
        Form a("Original_Form", 50, 25);
        Form b(a);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }
    catch (std::exception& e) { std::cerr << e.what() << std::endl; }
    std::cout << std::endl;
    return (0);
}
