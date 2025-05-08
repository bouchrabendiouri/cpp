

#include "Dog.hpp"

Dog::Dog() :Animal("Dog")
{
    std::cout <<_type << " constructed" << std::endl;
}

Dog::~Dog()
{
    std::cout <<_type << " destructed" << std::endl;
}

Dog::Dog( const Dog& src )
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog copy called" << std::endl;
    if (this != &src)
    {
        _type = src._type;
    }
    return *this;
}

void Dog::makeSound() const 
{
    std::cout << "woooooooooof! woof!" << std::endl;
}