
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materia[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &);
        MateriaSource&  operator=(MateriaSource const &);
        AMateria*       createMateria(std::string const & type);
        void            learnMateria(AMateria*);
};

#endif 


