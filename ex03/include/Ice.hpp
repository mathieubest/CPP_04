#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "./AMateria.hpp"

class Ice : virtual public AMateria {
    public:
        Ice();
        Ice(const Ice& copy);
        ~Ice();

        Ice& operator=(const Ice& other);

        AMateria* clone() const;
};

#endif