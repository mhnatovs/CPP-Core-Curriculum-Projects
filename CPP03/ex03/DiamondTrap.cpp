/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:31:57 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/27 15:45:20 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _hitPoints    = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
     std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
        : ClapTrap(name + "_clap_name"),//Constructor Initialization List
          ScavTrap(name),
          FragTrap(name),
          _name(name)
{
    _hitPoints    = FragTrap::_hitPoints;//100
    _energyPoints = ScavTrap::_energyPoints;//50
    _attackDamage = FragTrap::_attackDamage;//30
    std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
        : ClapTrap(other),
          ScavTrap(other),
          FragTrap(other),
          _name(other._name)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name:    " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
