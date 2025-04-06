#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain *animalBrain;
    public:
        Dog(void);
        Dog(Dog &copy);
        Dog &operator=(const Dog &original);
        virtual void makeSound(void) const;
        ~Dog(void);
}; 

#endif