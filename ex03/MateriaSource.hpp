#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*		materiasInventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&	original);
		MateriaSource&		operator=(const MateriaSource&	original);
		~MateriaSource();

		void			learnMateria(AMateria*);
		AMateria* 		createMateria(std::string const & type);
};

#endif