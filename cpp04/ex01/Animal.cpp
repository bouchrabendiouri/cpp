

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << type << " constructed" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructed" << std::endl;
}

Animal::Animal(const Animal& src)
{
    *this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal copy called" << std::endl;
    if (this != &rhs) {
    _type = rhs._type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal make sound called" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return _type;
}