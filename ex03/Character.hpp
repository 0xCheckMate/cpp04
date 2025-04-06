#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string			name;
		AMateria*			inventory[4];
		AMateria*			gCollector[1024];
		unsigned int		gCollElemCount;
	public:
		Character();
		Character(const std::string&	name);
		Character(const Character&	original);
		Character&		operator=(const Character&	original);
		~Character();
	
		std::string	const & getName() const;
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif