

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "--------------------- Bureaucrat can't sign Form ----------" << std::endl;
    try {
        Bureaucrat bureaucrat("bisbisso",11);
        Form form("Contract", 10, 20);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "--------------------- From sign grade out of range ----------" << std::endl;
    try {
        Bureaucrat bureaucrat("bisbisso",11);
        Form form("Contract", 0, 20);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "--------------------- From excute grade out of range ----------" << std::endl;
    try {
        Bureaucrat bureaucrat("bisbisso",11);
        Form form("Contract", 10, 200);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &error) {
        std::cout << error.what() << std::endl;
    }
    std::cout << "------------------------------------------------------------" << std::endl;
    return 0;
}