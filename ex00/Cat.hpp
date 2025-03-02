#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat &copy);
        Cat &operator=(const Cat &original);
        virtual void makeSound(void) const;
        ~Cat(void);
}; 

#endif