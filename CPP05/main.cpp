/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:32 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/04 16:49:56 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#define RESET "\033[0m"
#define YELLOW "\033[33m"

int main()
{
    try
    {
        std::cout << YELLOW << "\n * Normal cases *\n" << RESET;
        Bureaucrat a("Mike", 10);
        Bureaucrat b("Nick", 1);
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
    }
    catch (std::exception & e)
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
    
    std::cout << std::endl;
    return (0);
}
