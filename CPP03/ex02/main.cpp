/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:33:56 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/26 18:26:11 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n Creating ClapTrap \n";
    ClapTrap c("First");
    c.attack("target");
    c.takeDamage(5);
    c.beRepaired(3);

    std::cout << "\n Creating ScavTrap \n";
    ScavTrap s("Second");
    s.attack("enemy");
    s.guardGate();

    std::cout << "\n Creating FragTrap \n";
    FragTrap f("Third");
    f.attack("bad guy");
    f.highFivesGuys();

    std::cout << "\n End of main, destructors will now be called \n";
    return 0;
}
