#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog &copy);
        Dog &operator=(const Dog &original);
        virtual void makeSound(void) const;
        ~Dog(void);
}; 

#endif