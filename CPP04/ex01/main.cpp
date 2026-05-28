/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:31:30 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/28 15:41:18 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <time.h>

// int main()
// {
//     std::srand(0);
//     const Animal* a = new Dog();
//     std::cout << "The type of the object is " << a->getType() << std::endl;
//     a->makeSound();
//     delete a;
//     std::cout << "------------\n";
//     const Animal* b = new Cat();
//     std::cout << "The type of the object is " << b->getType() << std::endl;
//     b->makeSound();
//     delete b;
//     std::cout << "------------\n";
//     const Animal* c = new Animal();
//     std::cout << "The type of the object is " << c->getType() << std::endl;
//     c->makeSound();
//     delete c;
//     std::cout << "------------\n";
//     const WrongAnimal* d = new WrongCat();
//     std::cout << "The type of the object is " << d->getType() << std::endl;
//     d->makeSound();
//     delete d;
//     std::cout << "------------\n";
//     const WrongAnimal* e = new WrongAnimal();
//     std::cout << "The type of the object is " << e->getType() << std::endl;
//     e->makeSound();
//     delete e;
//     return 0;
// }

int main()
{
const Animal* j = new Dog();
// const Animal* i = new Cat();
delete j;//should not create a leak
// delete i;
return 0;
}
