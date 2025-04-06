#include "Character.hpp"
Character::Character() {
	this->name = "no-name";
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
	gCollElemCount = 0;
}

Character::Character(const std::string&	name) {
	this->name = name;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
	gCollElemCount = 0;
}

Character::Character(const Character&	original) {
	*this = original;
}

Character&		Character::operator=(const Character&	original) {
	if (this != &original) {
		this->name = original.getName();
		for (int i = 0; i < 4; i++) {
			if (inventory[i])
				delete inventory[i];
			if (original.inventory[i])
				inventory[i] = original.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i]) {
			delete inventory[i];
		}
	}
	for (unsigned int i = 0; i < gCollElemCount; i++) {
		delete gCollector[i];
	}
}

std::string	const & Character::getName() const {
	return name;
}

void 				Character::equip(AMateria* m) {
	int			i;

	if (!m)
		return ;

	i = 0;
	while (i < 4) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
		i++;
	}
}

void				Character::unequip(int idx) {
	int				i;

	i = 0;
	if (idx > -1 && idx < 4) {
		if (gCollElemCount == 1024) {
			for (int i = 0; i < 1024; i++) {
				delete gCollector[i];
			}
			gCollElemCount = 0;
		}
		gCollector[gCollElemCount++] = inventory[idx];
		inventory[idx] = NULL;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (idx > -1 && idx < 4 && inventory[idx]) {
		inventory[idx]->use(target);
	}
}
