/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:35:43 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/24 14:56:54 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
    Point a(0, 0);
    Point b(5, 10);
    Point c(10, 0);
    
    Point point1(5, 5);
    Point point2(4, 31);

    std::cout << bsp(a, b, c, point1) << std::endl;
    std::cout << bsp(a, b, c, point2) << std::endl;

    return 0;
}