#include "WrongCat.hpp"

WrongCat::WrongCat(void) 
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor has been called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(copy)
{
    this->type = copy.type;
    std::cout << "WrongCat copy constructor has been called";
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
    if (this != &original)
    {
        this->type = original.type;
    }
    std::cout << "WrongCat copy assignment operator has been called";
    return (*this);
}
void WrongCat::makeSound() const
{
    std::cout << "the WrongCat is saying Meeeeeeeeeeeeow" << std::endl;
}