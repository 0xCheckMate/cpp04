#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private: 
        Brain *animalBrain;
    public:
        Cat(void);
        Cat(Cat &copy);
        Cat &operator=(const Cat &original);
        virtual void makeSound(void) const;
        ~Cat(void);
}; 

#endif