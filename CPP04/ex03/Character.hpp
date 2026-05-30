/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 15:25:57 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/30 16:37:24 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class Character : public ICharacter {
    private:
        AMateria* inventory[4];
        std::string name;
    public:
        Character();
        Character::Character(std::string const& name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character() {};
        
         std::string const & getName() const;
         void equip(AMateria* m);
         void unequip(int idx);
         void use(int idx, ICharacter& target);

};

#endif