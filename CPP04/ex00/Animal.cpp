/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:37:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/28 14:27:59 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal &other) {
    std::cout << "Animal assignment operator called\n";
    if (this != &other)
        type = other.type;
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor called\n";
}

void Animal::makeSound(void) const {
    std::cout << "Animal makeSound member function called ";
    std::cout << "******" << std::endl;
}

std::string Animal::getType(void) const {
    return (type);
}
