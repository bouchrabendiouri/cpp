

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal& operator=( const Animal& rhs );
        Animal (const Animal& src);
        std::string     getType( void ) const;
        virtual void makeSound() const;
        
};

#endif