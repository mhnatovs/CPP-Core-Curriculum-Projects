/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:31:30 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/30 14:32:19 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// AAnimal test;
    // const int SIZE = 100;
    // const AAnimal* arr[SIZE];
    // for (int i = 0; i < SIZE / 2; i++)
    // {
    //     std::cout << i << " ";
    //     arr[i] = new Dog();
    // }
    // for (int i = SIZE / 2; i < SIZE; i++)
    // {
    //     std::cout << i << " ";
    //     arr[i] = new Cat();
    // }

    std::cout << "---------------------------\n";
    Cat cat1;
    cat1.getBrain()->setIdea(0, "*cat's original*");
    Cat cat2 = cat1;
    cat2.getBrain()->setIdea(0, "*cat's copy*");
    std::cout << "cat1's idea is: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2's idea is: " << cat2.getBrain()->getIdea(0) << std::endl;

    std::cout << "---------------------------\n";
    Dog dog1;
    dog1.getBrain()->setIdea(0, "*dog's original*");

    Dog dog2 = dog1;// test copy constructor
    dog2.getBrain()->setIdea(0, "*dog's copy*");
    std::cout << "dog1's idea is: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2's idea is: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2 = dog1;// test assignment operator
    dog2.getBrain()->setIdea(0, "*dog's assigned*");
    std::cout << "dog1's idea is: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2's idea is: " << dog2.getBrain()->getIdea(0) << std::endl;

    std::cout << "---------------------------\n";
    // for (int i = 0; i < SIZE; i++)
    // {
    //     std::cout << i << " ";
    //     delete arr[i];
    // }
    std::cout << "---------------------------\n";
    return (0);
}
