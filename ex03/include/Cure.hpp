#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "./AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();
        Cure(const Cure& other);
        ~Cure();

        Cure& operator=(const Cure& other);

        void setType(std::string& type);

        AMateria* clone() const override;
        void use(ICharacter& target) override;
};

#endif