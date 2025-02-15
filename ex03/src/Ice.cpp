#include "../include/Ice.hpp"

Ice::Ice()
{
    this->_type = "ice";
    std::cout << "Default constructor called for Ice" << std::endl;
}

Ice::Ice(const Ice& copy)
{
    *this = copy;
    std::cout << "Copy constructor called for Ice." << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor called for Ice" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

AMateria* Ice::clone() const
{
    std::cout << "Cloning Ice" << std::endl;
    return new Ice(*this);
}
