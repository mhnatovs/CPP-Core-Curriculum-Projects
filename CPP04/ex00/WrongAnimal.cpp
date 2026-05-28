/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:37:53 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/28 14:40:44 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
    std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal copy assignment operator called\n";
    if (this != &other)
        type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called\n";
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal makeSound member function called ";
    std::cout << "*/*/*/*/*/*" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (type);
}
