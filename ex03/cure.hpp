
#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
class Cure : public AMateria {
	public:
		Cure();
		Cure(const std::string&	type);
		Cure(const Cure& original);
		Cure&	operator=(const Cure& original);
		~Cure();
		AMateria*	clone();
		void	use(ICharacter& target);
};

#endif