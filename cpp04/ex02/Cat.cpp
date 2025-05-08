

#include "Cat.hpp"

Cat::Cat() :AAnimal("Cat")
{
    _brain = new Brain();
    std::cout <<_type << " constructed" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout <<_type << " destructed" << std::endl;
}

Cat::Cat( const Cat& src )
{
    _brain = new Brain(*src._brain);
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat copy called" << std::endl;
    if (this != &src)
    {
       _type = src._type;
       delete _brain;
       _brain = new Brain(*src._brain);
    }
    return *this;
}

void Cat::makeSound() const 
{
    std::cout << "Meeeeoooooooooooooooooooow !" << std::endl;
}