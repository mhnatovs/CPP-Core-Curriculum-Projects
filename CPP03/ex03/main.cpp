/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:33:56 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/27 16:01:56 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include"DiamondTrap.hpp"

int main()
{
    std::cout << "----------------\n";
    DiamondTrap a("A");
    a.attack("Enemy1");
    a.attack("Enemy2");
    a.attack("Enemy3");
    a.attack("Enemy4");
    std::cout << "Balance: " << a.getEnergyPoints() << std::endl;
    a.beRepaired(4);
    std::cout << "Balance energy: " << a.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << a.getAttackDamage() << std::endl;
    a.guardGate();
    a.highFivesGuys();
    a.whoAmI();
    a.takeDamage(300);
    a.attack("Enemy5");
    std::cout << "Balance: " << a.getEnergyPoints() << std::endl;
    std::cout << "Balance HP: " << a.getHitPoints() << std::endl;
    std::cout << "----------------\n";
    DiamondTrap b("B");

    std::cout << "----------------\n";
    DiamondTrap c("C");

    std::cout << "----------------\n";
    std::cout << "\nEnd of main, destructors will now be called\n";
    return 0;
}
