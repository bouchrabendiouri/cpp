

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5)
{
    _target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    AForm::operator=(rhs);
    if (this != &rhs)
        _target = rhs._target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getSigned())
        throw AForm::AFormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::CouldNotExecuteException();

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}