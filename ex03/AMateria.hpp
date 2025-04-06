#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria {
    protected :
        std::string type;
    public:
        AMateria();
        AMateria(std::string const &type);
        ~AMateria();
        AMateria(const AMateria &assign);
        std::string const & getType() const;
        AMateria& operator=(const AMateria &assign);
        virtual AMateria* clone() = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif
