

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout <<_type << "constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal " <<_type << " constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
    std::cout << "AAnimal copy destructor called" << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    if (this != &rhs) {
        _type = rhs._type;
    }
    return *this;
}

std::string    AAnimal::getType( void ) const
{
    return _type;
}