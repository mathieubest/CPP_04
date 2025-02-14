#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Default constructor called for Ice" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other._type) {
    std::cout << "Copy constructor called for Ice." << std::endl;
}

Ice::~Ice() {
    std::cout << "Destructor called for Ice" << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

void Ice::setType(std::string& type) {
    _type = type;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}