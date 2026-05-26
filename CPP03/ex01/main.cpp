/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:33:56 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/26 15:49:27 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("A");
    a.attack("Enemy");
    a.takeDamage(50);
    a.beRepaired(20);
    a.guardGate();

    std::cout << "---" << std::endl;

    ScavTrap Copy(a);  // copy constructor
    std::cout << "---" << std::endl;

	a.takeDamage(200);
	a.attack("Enemy");
	a.beRepaired(10);
    std::cout << "---" << std::endl;

	ScavTrap b("B");
	ScavTrap c;

	c = b;
    return 0;
}