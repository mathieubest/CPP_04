#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        // Constructor
        WrongCat();
        WrongCat(const WrongCat& other);

        // Destructor
        ~WrongCat();

        // Overloaded Operator
        WrongCat& operator=(const WrongCat& other);

        // Public Methods
        void makeSound() const;
};

#endif