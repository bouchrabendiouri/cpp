

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern & operator=(Intern const & rhs);

        AForm *makeForm(std::string const & formName, std::string target);
};


#endif