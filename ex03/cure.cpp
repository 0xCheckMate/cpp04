#include "cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
Cure::Cure() : AMateria("cure") 
{
}

Cure::Cure(const Cure& original) : AMateria(type)
{
}

Cure&		Cure::operator=(const Cure& original) {
	if (this != &original)
		AMateria::operator=(original);
	return *this;
}

Cure::~Cure() {
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
AMateria*	Cure::clone() {
	return new Cure(*this);
}

