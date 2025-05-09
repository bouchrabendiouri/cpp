

#include "Dog.hpp"

Dog::Dog() :Animal("Dog")
{
    _brain = new Brain();
    std::cout <<_type << " constructed" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout <<_type << " destructed" << std::endl;
}

Dog::Dog( const Dog& src )
{
    _brain = new Brain(*src._brain);
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog copy called" << std::endl;
    if (this != &src)
    {
        _type = src._type;
        delete _brain;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

void Dog::makeSound() const 
{
    std::cout << "woooooooooof! woof!" << std::endl;
}