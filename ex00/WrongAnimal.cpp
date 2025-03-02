#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(void)
{
    type = "Undifined WrongAnimal";
    std::cout << "WrongAnimal default constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string WrongAnimal) : type(WrongAnimal)
{
    std::cout << "WrongAnimal parameterized constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "WrongAnimal copy constructor has been called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oroginal)
{
    std::cout << "WrongAnimal copy assignment operator has been called";
    if (this != &oroginal)
        this->type = oroginal.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor has been called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wronganimal " << getType() << " said oh no iam a human!!!!!!!!" << std::endl;
}