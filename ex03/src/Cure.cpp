#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Default constructor called for Cure." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other._type) {
    std::cout << "Copy constructor called for Cure." << std::endl;
}

Cure::~Cure() {
    std::cout << "Destructor called for Cure" << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

void Cure::setType(std::string& type) {
    _type = type;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}