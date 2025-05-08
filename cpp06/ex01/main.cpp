

#include "Serializer.hpp"

int main() {
    Data* data = new Data;

    data->name = "nouha";
    data->age = 20;

    uintptr_t serializedData = Serializer::serialize(data);
    Data* deserializedData = Serializer::deserialize(serializedData);
    std::cout << "Deserialized Data: \nName: " << deserializedData->name
              << "\nAge: " << deserializedData->age << std::endl;
    delete data;
    int* ptr = new int(10);
    uintptr_t intAddress = reinterpret_cast<uintptr_t>(ptr);
    std::cout << intAddress << std::endl;
    int *a = reinterpret_cast<int*>(intAddress);
    std::cout << *a << std::endl;
    return 0;
}
