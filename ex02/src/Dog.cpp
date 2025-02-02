#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

Dog::Dog() : A_Animal(), brain(new Brain()) {
    this->setType("Dog");
    std::cout << "Default constructor called for a dog." << std::endl;
}

Dog::Dog(const Dog& other) : A_Animal(other), brain(new Brain(*other.brain)) {
    this->setType("Dog");
    std::cout << "Copy constructor called for a dog." << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Default destructor called for a dog." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        A_Animal::operator=(other);
        *brain = *other.brain;
        this->setType("Dog");
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof Woof!" << std::endl;
}