#include "Cat.hpp"

Cat::Cat() : Animal ("Cat") {
std::cout << "Cat default constructor called" << std::endl;
this->_type = "Cat";
}

Cat::Cat( const Cat& copy ) : Animal(copy._type) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Cat::~Cat() {
    std::cout << "Cat deconstructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& copy ){
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->_type = copy.getType();
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " says meow meow." << std::endl;
    return ;
}
