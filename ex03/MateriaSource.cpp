#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		materiasInventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource&	original) {
	*this = original;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& original) {
	if (this != &original) {
		for (int i = 0; i < 4; i++) {
			if (materiasInventory[i]) {
				delete materiasInventory[i];  // Ensure previously allocated memory is cleaned up
			}
			if (original.materiasInventory[i]) {
				materiasInventory[i] = original.materiasInventory[i]->clone();  // Create a new copy
			}
		}
	}
	return *this;
}


MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (materiasInventory[i]) {
			delete materiasInventory[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m) return;
    for (int i = 0; i < 4; ++i) {
        if (!materiasInventory[i]) {
            materiasInventory[i] = m;  // Store the original (no clone)
            return;
        }
    }
    // If no space, delete to prevent leak
    delete m;
}


AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materiasInventory[i] && materiasInventory[i]->getType() == type) {  // Check NULL first
            return materiasInventory[i]->clone();
        }
    }
    return 0;
}