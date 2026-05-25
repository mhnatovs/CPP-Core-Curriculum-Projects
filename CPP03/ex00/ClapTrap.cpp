/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:13:11 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/25 15:49:59 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
    
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other.getName();;
        _hitPoints = other.getHitPoints();
        _energyPoints = other.getEnergyPoints();
        _attackDamage = other.getAttackDamage();
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

int ClapTrap::getHitPoints(void) const {
    return (_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const {
    return (_energyPoints);
}

int ClapTrap::getAttackDamage(void) const {
    return (_attackDamage);
}

std::string ClapTrap::getName(void) const {
    return (_name);
}

void ClapTrap::setHitPoints(int value) {
    _hitPoints = value;
}

void ClapTrap::setEnergyPoints(int value) {
    _energyPoints = value;
}

void ClapTrap::setAttackDamage(int value) {
    _attackDamage = value;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}


void ClapTrap::attack(const std::string& target) {
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack, no hit points or energy!" << std::endl;
        return ;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return; 
    }
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Hit Points Balance: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair, no hit points or energy!" << std::endl;
        return ;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points. Hit Points Balance: " << _hitPoints << " hit points\n";
}
