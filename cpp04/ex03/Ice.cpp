

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
                                                                                                                                                                                                                                                                                                                                                                            
}

Ice::Ice(Ice const & src)
{
    *this = src;
}

Ice&   Ice::operator=(const Ice& rhs) {
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

Ice::~Ice()
{
    
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

