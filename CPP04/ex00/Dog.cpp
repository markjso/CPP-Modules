#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
std::cout << "Dog default constructor called" << std::endl;
this->_type = "Dog";
}

Dog::Dog( const Dog& copy ) : Animal(copy._type) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Dog::~Dog() {
    std::cout << "Dog deconstructor called" << std::endl;
}

Dog & Dog::operator=( const Dog& copy ){
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->_type = copy.getType();
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type << " says woof woof." << std::endl;
    return ;
}
