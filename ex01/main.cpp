#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "\nCreating an array of Animals:" << std::endl;
    const int size = 4;
    Animal* animals[size];
    for (int k = 0; k < size / 2; k++) animals[k] = new Dog();
    for (int k = size / 2; k < size; k++) animals[k] = new Cat();
    
    std::cout << "\nDeleting the array of Animals:" << std::endl;
    for (int k = 0; k < size; k++) delete animals[k];
    
    return 0;
}