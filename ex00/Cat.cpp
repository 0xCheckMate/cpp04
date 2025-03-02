#include "Cat.hpp"

Cat::Cat(void) 
{
    type = "Cat";
    std::cout << "Cat default constructor has been called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor has been called" << std::endl;
}

Cat::Cat(Cat &copy) : Animal(copy)
{
    this->type = copy.type;
    std::cout << "Cat copy constructor has been called";
}

Cat &Cat::operator=(const Cat &original)
{
    if (this != &original)
    {
        this->type = original.type;
    }
    std::cout << "Cat copy assignment operator has been called";
    return (*this);
}
void Cat::makeSound() const
{
    std::cout << "the cat is saying Meeeeeeeeeeeeow" << std::endl;
}