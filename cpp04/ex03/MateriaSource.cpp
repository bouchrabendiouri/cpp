

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
    // std::cout << "Materia source created " << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_materia[i])
                delete _materia[i];
            if (rhs._materia[i])
                _materia[i] = rhs._materia[i]->clone();
            else
                _materia[i] = NULL;
        }
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (_materia[i] == NULL)
        {
            _materia[i] = m->clone();
            return;
        }
}

AMateria*   MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < 4; i++)
        if (_materia[i] && _materia[i]->getType() == type)
            return _materia[i]->clone();
    return 0;
}
