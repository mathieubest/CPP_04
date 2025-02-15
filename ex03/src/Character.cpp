#include "../include/Character.hpp"

Character::Character(std::string const& name) : _name(name)
{
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(const Character& copy)
{
    *this = copy;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i]) {
            delete this->_inventory[i];
        }
    }
}

Character& Character::operator=(const Character& other)
{
    if (this != &other) {
        this->_name = other._name;
        for (int i = 0; i < 4; i++) {
            if (this->_inventory[i]) {
                delete this->_inventory[i];
            }
            if (other._inventory[i]) {
                this->_inventory[i] = other._inventory[i]->clone();
            }
        }
    }
    return *this;
}

std::string const& Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = m;
            std::cout << "Equipped " << m->getType() << " in slot " << i << std::endl;
            return;
        }
    }
    std::cout << "Inventory is full" << std::endl;
    delete m;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4) {
        if (this->_inventory[idx]) {
            delete this->_inventory[idx];
            this->_inventory[idx] = NULL;
            std::cout << "Unequipped " << this->_inventory[idx]->getType() << " from slot " << idx << std::endl;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4) {
        if (this->_inventory[idx]) {
            this->_inventory[idx]->use(target);
        }
    }
}