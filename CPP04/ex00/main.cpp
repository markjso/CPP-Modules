#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *	animal = new Animal();
		std::cout << "Animal type: " << animal->getType() << std::endl;
		animal->makeSound();
		delete animal;
		std::cout << std::endl;

	const Animal *	dog = new Dog();
		std::cout << "Dog type: " << dog->getType() << std::endl;
		dog->makeSound();
		delete dog;
		std::cout << std::endl;

	const Animal *	cat = new Cat();
		std::cout << "Cat type: " << cat->getType() << std::endl;
		cat->makeSound();
		delete cat;
		std::cout << std::endl;	
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete j;
	delete i;
	delete meta;

	return 0;
}
