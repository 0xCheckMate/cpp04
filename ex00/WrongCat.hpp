#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat &copy);
        WrongCat &operator=(const WrongCat &original);
        void makeSound(void) const;
        ~WrongCat(void);
}; 

#endif