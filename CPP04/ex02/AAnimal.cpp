/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:37:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/30 11:22:30 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal(const AAnimal &other) {
    std::cout << "AAnimal copy constructor called\n";
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other) {
    std::cout << "AAnimal assignment operator called\n";
    if (this != &other)
        type = other.type;
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called\n";
}

std::string AAnimal::getType(void) const {
    return (type);
}

// void AAnimal::makeSound(void) const {
//     std::cout << "Animal makeSound member function called ";
//     std::cout << "******" << std::endl;
// }
