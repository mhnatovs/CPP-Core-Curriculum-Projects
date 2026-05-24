/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:35:43 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/24 13:21:19 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

// int main(void)
// {
//     Fixed a(10);//10
//     Fixed b(20);//20

    // std::cout << "\tComparison" << std::endl;
    // std::cout << (a > b)  << std::endl;  // 0 (false)
    // std::cout << (a < b)  << std::endl;  // 1 (true)
    // std::cout << (a == b) << std::endl;  // 0 (false)
    // std::cout << (a != b) << std::endl;  // 1 (true)
    // std::cout << (a >= b) << std::endl;  // 0 (false)
    // std::cout << (a <= b) << std::endl;  // 1 (true)

    // std::cout << a + b << std::endl;  // 30
    // std::cout << b - a << std::endl;  // 10
    // std::cout << a * b << std::endl;  // 200
    // std::cout << b / a << std::endl;  // 2

    // std::cout << "\tIncrement" << std::endl;//ε = smallest representable step In this case: ε = 1/256 = 0.00390625
    // Fixed c(5);
    // std::cout << c   << std::endl;  // 5
    // std::cout << ++c << std::endl;  // 5.00391
    // std::cout << c++ << std::endl;  // 5.00391
    // std::cout << c   << std::endl;  // 5.00781
    // std::cout << --c << std::endl;  // 5.00391
    // std::cout << c-- << std::endl;  // 5.00391
    // std::cout << c   << std::endl;  // 5

    // std::cout << "\tMin/Max" << std::endl;
    // Fixed d(42);
    // Fixed e(100);
    // std::cout << Fixed::min(d, e) << std::endl;  // 42
    // std::cout << Fixed::max(d, e) << std::endl;  // 100
    // Fixed const f(15);
    // Fixed const g(99);
    // std::cout << Fixed::min(f, g) << std::endl;  // 15
    // std::cout << Fixed::max(f, g) << std::endl;  // 99

    // std::cout << "\tNegative numbers" << std::endl;
    // Fixed h(-5);
    // Fixed i(-10);
    // std::cout << h + i << std::endl;  // -15
    // std::cout << h - i << std::endl;  // 5
    // std::cout << h * i << std::endl;  // 50
    // std::cout << Fixed::min(h, i) << std::endl;  // -10
    // std::cout << Fixed::max(h, i) << std::endl;  // -5

    // std::cout << "\tFloat" << std::endl;
    // Fixed j(1.5f);
    // Fixed k(0.25f);
    // std::cout << j + k << std::endl;  // 1.75
    // std::cout << j * k << std::endl;  // 0.375
    // std::cout << j / k << std::endl;  // 6

    // return 0;
// }