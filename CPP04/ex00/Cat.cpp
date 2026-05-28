/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:40:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/28 14:22:23 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor\n";
    type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound(void) const {
    std::cout << "Meow!" << std::endl;
}
