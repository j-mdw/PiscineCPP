#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("PresidentialPardonForm", SIGN_GRADE_P, EXEC_GRADE_P),
    _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
    Form(src.getName(), src.getSignGrade(), src.getExecGrade()),
    _target(src.getTarget())
{}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    Form::operator = (src);
    this->_target = src.getTarget();
    return (*this);
}

std::string const &
PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

void
PresidentialPardonForm::action(void) const
{
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

bool
PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
    try
    {
        if (!this->getIsSigned())
        {    
            std::cout << "Form is not signed" << std::endl;
            return (false);
        }
        else if (this->checkGrade(executor.getGrade(), EXEC_GRADE_P, GRADE_MAX))
        {
            this->action();
            return (true);
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    return (false);
}
