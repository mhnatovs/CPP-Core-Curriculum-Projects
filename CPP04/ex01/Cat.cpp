/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:40:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/30 14:11:54 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain()) {
    std::cout << "Cat default constructor\n";
    type = "Cat";
    
}

Cat::Cat(const Cat &other)
        : Animal(other),
          brain(new Brain(*other.brain))
{
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;//deep copy
    }
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
    delete brain;
}

void Cat::makeSound(void) const {
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain(void) const
{
    return (brain);
}
