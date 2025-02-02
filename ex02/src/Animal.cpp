#include "../include/Animal.hpp"

A_Animal::A_Animal() : _type("Unknown") {
    std::cout << "Default constructor called for an animal." << std::endl;
}

A_Animal::A_Animal(const A_Animal& other) : _type(other._type) {
    std::cout << "Copy constructor called for an animal." << std::endl;
}

A_Animal::~A_Animal() {
    std::cout << "Destructor called for an animal." << std::endl;
}

A_Animal& A_Animal::operator=(const A_Animal& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

const std::string& A_Animal::getType() const {
    return this->_type;
}

void A_Animal::setType(const std::string& type) {
    this->_type = type;
}