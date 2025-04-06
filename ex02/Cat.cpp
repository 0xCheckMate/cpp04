#include "Cat.hpp"

Cat::Cat(void) 
{
    type = "Cat";
    animalBrain = new Brain;
    std::cout << "Cat default constructor has been called" << std::endl;
}

Cat::~Cat(void)
{
    delete animalBrain;
    std::cout << "Cat destructor has been called" << std::endl;
}

Cat::Cat(Cat &copy) : Animal(copy)
{
    this->type = copy.type;
    this->animalBrain = new Brain(*copy.animalBrain);
    std::cout << "Cat copy constructor has been called";
}

Cat &Cat::operator=(const Cat &original)
{
    if (this != &original)
    {
        animalBrain = new Brain(*original.animalBrain);
        this->type = original.type;
    }
    std::cout << "Cat copy assignment operator has been called";
    return (*this);
}
void Cat::makeSound() const
{
    std::cout << "the cat is saying Meeeeeeeeeeeeow" << std::endl;
}