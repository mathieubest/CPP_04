#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : virtual public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];

    public:
        Character(std::string const& name);
        Character(const Character& copy);
        virtual ~Character();
        Character& operator=(const Character& other);
        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif