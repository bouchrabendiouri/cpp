

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>

struct Data {
    int age;
    std::string name;
};

class Serializer {
    public:
        Serializer();
        Serializer(Serializer const& x);
        Serializer& operator=(Serializer const& x);
        ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);      
};

#endif