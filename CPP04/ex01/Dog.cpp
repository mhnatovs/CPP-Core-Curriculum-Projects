/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:40:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/28 15:37:10 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal(), brain(new Brain()) {
    std::cout << "Dog default constructor\n";
    type = "Dog";
}

Dog::Dog(const Dog &other)
        : Animal(other),
          brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;//deep copy
    }
    return (*this);
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const {
    std::cout << "Woof! Woof!" << std::endl;
}
