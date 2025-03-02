#include "Dog.hpp"

Dog::Dog(void) 
{
    type = "Dog";
    std::cout << "Dog default constructor has been called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor has been called" << std::endl;
}

Dog::Dog(Dog &copy) : Animal(copy)
{
    this->type = copy.type;
    std::cout << "Dog copy constructor has been called";
}

Dog &Dog::operator=(const Dog &original)
{
    if (this != &original)
    {
        this->type = original.type;
    }
    std::cout << "Dog copy assignment operator has been called";
    return (*this);
}
void Dog::makeSound() const
{
    std::cout << "the Dog is saying Woooooooooooof" << std::endl;
}