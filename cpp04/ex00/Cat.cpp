

#include "Cat.hpp"

Cat::Cat() :Animal("Cat")
{
    std::cout <<_type << " constructed" << std::endl;
}

Cat::~Cat()
{
    std::cout <<_type << " destructed" << std::endl;
}

Cat::Cat( const Cat& src )
{
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat copy called" << std::endl;
    if (this != &src)
    {
       _type = src._type;
    }
    return *this;
}

void Cat::makeSound() const 
{
    std::cout << "Meeeeoooooooooooooooooooow !" << std::endl;
}