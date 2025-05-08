
#include "WrongCat.hpp"

WrongCat::WrongCat() :WrongAnimal("WrongCat")
{
    std::cout <<_type << " constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
    *this = src;    
}

WrongCat& WrongCat::operator=( const WrongCat& src )
{
    std::cout << "WrongCat copy called" << std::endl;
    if (this != &src)
    {
       _type = src._type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout <<_type << " destructed" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "Meeeeoooooooooooooooooooow !" << std::endl;
}