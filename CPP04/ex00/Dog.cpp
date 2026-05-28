/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:40:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/28 14:21:07 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() {
    std::cout << "Dog default constructor\n";
    type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const {
    std::cout << "Woof! Woof!" << std::endl;
}
