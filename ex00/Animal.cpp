#include "Animal.hpp"
Animal::Animal(void)
{
    type = "Undifined Animal";
    std::cout << "Animal default constructor has been called" << std::endl;
}

Animal::Animal(std::string Animal) : type(Animal)
{
    std::cout << "Animal parameterized constructor has been called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    this->type = copy.type;
    std::cout << "Animal copy constructor has been called" << std::endl;
}

Animal &Animal::operator=(const Animal &oroginal)
{
    std::cout << "Animal copy assignment operator has been called";
    if (this != &oroginal)
        this->type = oroginal.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor has been called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "animal " << getType() << " said ????" << std::endl;
}