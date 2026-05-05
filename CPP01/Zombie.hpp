/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:32:47 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/05 17:47:16 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {
	private:
		std::string	name;

	public:
		std::string	getName() const;
		void		setName(const std::string &str);
		void		announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif