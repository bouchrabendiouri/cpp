

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
         ~WrongAnimal();
        WrongAnimal& operator=( const WrongAnimal& rhs );
        WrongAnimal (const WrongAnimal& src);
        std::string     getType( void ) const;
        void makeSound() const;
        
};

#endif