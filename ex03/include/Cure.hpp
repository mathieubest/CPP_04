#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "./AMateria.hpp"

class Cure : virtual public AMateria{
    public:
        Cure();
        Cure(const Cure& copy);
        ~Cure();

        Cure& operator=(const Cure& other);

        AMateria* clone() const;
};

#endif