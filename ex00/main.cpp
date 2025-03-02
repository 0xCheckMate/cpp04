#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
const WrongAnimal* wrongAnimal = new WrongAnimal();
const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " says: ";
    wrongCat->makeSound();

    std::cout << wrongAnimal->getType() << " says: ";
    wrongAnimal->makeSound();
    delete wrongAnimal;
    delete wrongCat;
    delete meta;
    delete j;
    delete i;
return 0;
}