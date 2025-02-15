#include "../include/Cure.hpp"

Cure::Cure()
{
    this->_type = "cure";
    std::cout << "Default constructor called for Cure." << std::endl;
}

Cure::Cure(const Cure& copy)
{
    std::cout << "Copy constructor called for Cure." << std::endl;
    *this = copy;
}

Cure::~Cure()
{
    std::cout << "Destructor called for Cure" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

AMateria* Cure::clone() const
{
    std::cout << "Cloning Cure" << std::endl;
    return new Cure(*this);
}
