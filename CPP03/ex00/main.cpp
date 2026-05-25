/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:33:56 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/25 15:58:12 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("First");

    a.setAttackDamage(1);
    a.attack("Enemy1");
    std::cout << "Energy points: " << a.getEnergyPoints() << std::endl;
    a.takeDamage(5);
    a.beRepaired(5);
    a.takeDamage(3);
    a.beRepaired(1);
    a.takeDamage(10);
    a.takeDamage(10);
    a.attack("Enemy2");
    std::cout << "Energy points: " << a.getEnergyPoints() << std::endl;
    std::cout << "Hit points: " << a.getHitPoints() << std::endl;

    std::cout << "---------------------\n";

    ClapTrap b("Second");
    b.setAttackDamage(1);
    for (int i = 1; i <= 11; i++)
    {
        std::cout << i << "\t";
        b.attack("Enemy");
    }
    std::cout << "Energy points: " << b.getEnergyPoints() << std::endl;
    std::cout << "Hit points: " << b.getHitPoints() << std::endl;

    return (0);
}

/*
attack          ->target loses HP
repair itself   ->regain <amount> of HP
Attacking and repairing each cost 1 energy point
*/