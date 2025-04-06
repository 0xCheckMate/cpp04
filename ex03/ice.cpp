#include "ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{

}

Ice& Ice::operator=(const Ice &assign) {
    if (this != &assign)
    {
        AMateria::operator=(assign);
    }
    return *this;
}

void Ice::use(ICharacter &target) {
    std::cout << "*shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone() {
    return new Ice(*this);
}
