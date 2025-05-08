

#include "Bureaucrat.hpp"

int main() {
    std::cout << "------------------ Normal test ------------------" << std::endl;
    try {
        Bureaucrat bureaucrat("mimon", 85);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
        Bureaucrat invalidBureaucrat("Invalid", 0);
    } 
    catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "---------------- Increment out of range ---------" << std::endl;
    try {
        Bureaucrat bureaucrat("mimon", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
    } 
    catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "------------------ Decrement out of range -------" << std::endl;
    try {
        Bureaucrat bureaucrat("mimon", 150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
    } 
    catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << "-------------------------------------------------" << std::endl;
    return 0;
}
