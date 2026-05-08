/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:32:47 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/07 17:58:50 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void	setName(const std::string &str);
		void	announce(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif