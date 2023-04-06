/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:20:50 by jmarks            #+#    #+#             */
/*   Updated: 2023/04/06 13:21:39 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
   AAnimal* arrayofAnimals[4];
   
    std::cout << std::endl;
    std::cout << "Array of animal objects(4), half cats and half dogs." <<std::endl;
    std::cout << "Constructors called" << std::endl;
    std::cout << "-------------------" << std::endl;

   for (int i = 0; i < 4; i++) {
       if (i < 2)
       {
        arrayofAnimals[i] = new Cat();
        std::cout << "Type of animal created is a: " << arrayofAnimals[i]->getType() << std::endl;
       }
       else {
       arrayofAnimals[i] = new Dog();
       std::cout << "Type of animal created is a: " << arrayofAnimals[i]->getType() << std::endl;
       }
    }
	std::cout << std::endl;
    std::cout << "Destructors called" << std::endl;
    std::cout << "-------------------" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete arrayofAnimals[i];
        std::cout << "Type of animal deleted is a: " << arrayofAnimals[i]->getType() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Getting ideas from Brain for Cats and Dogs" <<std::endl;
    std::cout << "------------------------------------------" << std::endl;

    int index = 0;
    Cat * cuddles = new Cat();
    cuddles->getBrain()->setIdeas(index, "chase mice");
    Cat * copyCat = new Cat(*cuddles);
    std::cout << std::endl;
    std::cout << "cuddles idea: "<< cuddles->getBrain()->getIdeas(0) << std::endl;
    std::cout << "copyCats idea: "<< copyCat->getBrain()->getIdeas(0) << std::endl;
    cuddles->getBrain()->setIdeas(index, "play with string");
    std::cout << "cuddles new idea: "<< cuddles->getBrain()->getIdeas(0) << std::endl;
    std::cout << "copyCats new idea: "<< copyCat->getBrain()->getIdeas(0) << std::endl;
    std::cout << std::endl;
    *copyCat = *cuddles;
    std::cout << std::endl;
    std::cout << "copyCats idea should now be the same as cuddles: "<< copyCat->getBrain()->getIdeas(0) << std::endl;
    std::cout << std::endl;

    index = 1;
    Dog * fred = new Dog();
    fred->getBrain()->setIdeas(index, "roll over");
    Dog * copyDog = new Dog(*fred);
    std::cout << std::endl;
    std::cout << "freds idea: "<< fred->getBrain()->getIdeas(1) << std::endl;
    std::cout << "copyDogs idea: "<< copyDog->getBrain()->getIdeas(1) << std::endl;
    fred->getBrain()->setIdeas(index, "chase the stick");
    std::cout << "freds new idea: "<< fred->getBrain()->getIdeas(1) << std::endl;
    std::cout << "copyDogs new idea: "<< copyDog->getBrain()->getIdeas(1) << std::endl;
    std::cout << std::endl;

    delete cuddles;
    delete copyCat;
    delete fred;
    delete copyDog;

    /* this will not work
    const AAnimal* rabbit = new AAnimal();
    delete rabbit;
    */

	return 0;
}
