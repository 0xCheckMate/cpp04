#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string WrongAnimal);
        WrongAnimal(WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &original);
        void makeSound(void) const;
        std::string getType(void) const;
        virtual ~WrongAnimal();

};

#endif