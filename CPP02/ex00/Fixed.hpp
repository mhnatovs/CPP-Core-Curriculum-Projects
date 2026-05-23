/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:26:10 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/23 15:01:32 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int              _fixedPointValue;
        static const int _fractionalBits = 8;

    public:
        Fixed();                                // 1. Default constructor
        Fixed(const Fixed &other);              // 2. Copy constructor
        Fixed &operator=(const Fixed &other);   // 3. Copy assignment operator overload
        ~Fixed();                               // 4. Destructor

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif