#include "Dog.hpp"

Dog::Dog(void) 
{
    type = "Dog";
    animalBrain = new Brain;
    std::cout << "Dog default constructor has been called" << std::endl;
}

Dog::~Dog(void)
{
    delete animalBrain;
    std::cout << "Dog destructor has been called" << std::endl;
}

Dog::Dog(Dog &copy) : Animal(copy)
{
    this->type = copy.type;
    this->animalBrain = new Brain(*copy.animalBrain);
    std::cout << "Dog copy constructor has been called";
}

Dog &Dog::operator=(const Dog &original)
{
    if (this != &original)
    {
        Animal::operator=(original);
        delete animalBrain;
        animalBrain = new Brain(*original.animalBrain);

        this->type = original.type;
    }
    std::cout << "Dog copy assignment operator has been called";
    return (*this);
}
void Dog::makeSound() const
{
    std::cout << "the Dog is saying Woooooooooooof" << std::endl;
}