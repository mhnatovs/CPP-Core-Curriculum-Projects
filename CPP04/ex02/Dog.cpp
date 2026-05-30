/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:40:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/30 14:12:53 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : AAnimal(), brain(new Brain()) {
    std::cout << "Dog default constructor\n";
    type = "Dog";
}

Dog::Dog(const Dog &other)
        : AAnimal(other),
          brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
    {
        AAnimal::operator=(other);
        *brain = *other.brain;//deep copy
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
    delete brain;
}

void Dog::makeSound(void) const {
    std::cout << "Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return (brain);
}
