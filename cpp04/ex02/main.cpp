

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main( void )
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    j->makeSound();
    i->makeSound();
    delete i;
    delete j;
    
    const AAnimal* animals[2] = {new Dog(), new Cat()};
    for ( int i = 0; i < 2; i++ ) {
        delete animals[i];
    }
    
    std::cout << "---------------------- deep copy test --------------------" << std::endl;
    Dog* d = new Dog();
    Dog* s = new Dog(*d);

    delete d;
    delete s;
    system("leaks Animal");
    return 0;
}