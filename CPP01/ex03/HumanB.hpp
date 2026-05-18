/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:03:47 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/17 20:16:16 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <string>

class HumanB {

    private:
        std::string name;
        Weapon *weapon;

    public:
        void attack();
        void setWeapon(Weapon &weapon);
        HumanB(std::string name);
};

#endif