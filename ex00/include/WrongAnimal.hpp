#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string _type;

    public:
        // Constructor
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);

        // Destructor
        ~WrongAnimal();

        // Overloaded Operator
        WrongAnimal& operator=(const WrongAnimal& other);

        // Public Methods
        void makeSound() const;

        // Getters
        const std::string& getType() const;

        // Setters
        void setType(const std::string& type);
};

#endif