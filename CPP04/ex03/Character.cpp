/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 16:20:27 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/30 16:40:29 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// AMateria* inventory[4];

Character::Character() :name(name) {}

Character::Character(std::string const& name) : name(name) {
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character& other) :name(other.name) {
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
    }
}

Character& Character::operator=(const Character& other) {
    
}

Character::~Character() {}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    
}

void Character::unequip(int idx)
{
    
}

void Character::use(int idx, ICharacter& target)
{
        (void)target;
}
