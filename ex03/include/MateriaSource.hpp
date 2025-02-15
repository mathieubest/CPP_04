#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
    private:
        AMateria* _materias[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        virtual ~MateriaSource();
        MateriaSource& operator=(const MateriaSource& other);

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const& type);
};

#endif