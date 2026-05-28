/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:31:30 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/28 14:47:21 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* a = new Dog();
    std::cout << "The type of the object is " << a->getType() << std::endl;
    a->makeSound();
    delete a;
    std::cout << "------------\n";
    const Animal* b = new Cat();
    std::cout << "The type of the object is " << b->getType() << std::endl;
    b->makeSound();
    delete b;
    std::cout << "------------\n";
    const Animal* c = new Animal();
    std::cout << "The type of the object is " << c->getType() << std::endl;
    c->makeSound();
    delete c;
    std::cout << "------------\n";
    const WrongAnimal* d = new WrongCat();
    std::cout << "The type of the object is " << d->getType() << std::endl;
    d->makeSound();
    delete d;
    std::cout << "------------\n";
    const WrongAnimal* e = new WrongAnimal();
    std::cout << "The type of the object is " << e->getType() << std::endl;
    e->makeSound();
    delete e;
    return 0;
}

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// delete meta;
// delete j;
// delete i;
// return 0;
// }

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const WrongAnimal* i = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// delete i;
// delete j;
// delete meta;
// return 0;
// }
