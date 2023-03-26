#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class   Dog : public Animal {
  
    public:
        Dog ( void );
        Dog ( const Dog& copy );
        ~Dog ( void );
        Dog& operator=( const Dog& copy );
        void makeSound( ) const;
};

#endif
