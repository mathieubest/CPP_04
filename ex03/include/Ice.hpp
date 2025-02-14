#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "./AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& other);
        ~Ice();

        Ice& operator=(const Ice& other);

        void setType (std::string& type);

        AMateria* clone() const override;
        void use(ICharacter& target) override;
};

#endif