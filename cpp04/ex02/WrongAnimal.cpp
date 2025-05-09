

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout <<"WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal " << type << " constructed" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "WrongAnimal copy constructed" << std::endl;
    if (this != &rhs) {
        _type = rhs._type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make sound called" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return _type;
}