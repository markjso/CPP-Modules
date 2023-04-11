/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:20:50 by jmarks            #+#    #+#             */
/*   Updated: 2023/03/27 11:20:52 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/* virtual function resolution only works when a virtual member function 
is called through a pointer or reference to a class type object. This 
works because the compiler can differentiate the type of the pointer or 
reference from the type of the object being pointed to or referenced. */

int main()
{
	std::cout << std::endl;
    const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
   
	std::cout << j->getType() << " : ";
    j->makeSound();
	std::cout << i->getType() << " : ";
    i->makeSound();
    meta->makeSound();
    std::cout << k->getType() << " : ";
    k->makeSound();
    std::cout << l->getType() << " : ";
    l->makeSound();
	std::cout << std::endl;
	
    delete j;
	delete i;
	delete meta;
    delete k;
    delete l;
    
	return 0;
}

