#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

/*
	CONCRETE CLASS - FROM - AMateria ABSTRACT CLASS
*/
class AMateria;
class Ice : public AMateria {
	public:
		Ice();
		Ice(const std::string&	type);
		Ice(const Ice& original);
		Ice&		operator=(const Ice& original);
		~Ice();

		AMateria*	clone();
		void		use(ICharacter& target);
};

#endif