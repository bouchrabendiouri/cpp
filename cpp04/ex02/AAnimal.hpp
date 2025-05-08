

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal& rhs);
        AAnimal (const AAnimal& src);
        std::string     getType( void ) const;
        virtual void makeSound() const=0;
        
};

#endif