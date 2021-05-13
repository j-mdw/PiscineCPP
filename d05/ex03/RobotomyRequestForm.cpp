#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form("RobotomyRequestForm", SIGN_GRADE_R, EXEC_GRADE_R),
    _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
    Form(src.getName(), src.getSignGrade(), src.getExecGrade()),
    _target(src.getTarget())
{}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
    Form::operator = (src);
    this->_target = src.getTarget();
    return (*this);
}

std::string const &
RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void
RobotomyRequestForm::action(void) const
{
    if (clock() % 2)
        std::cout << "Brrrzzzzzzz\nbrzzz brzzzz\nBRRRRZZZZZZZZZZZZZZ" << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}

bool
RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
    try
    {
        if (!this->getIsSigned())
        {
            std::cout << "Form is not signed" << std::endl;
            return (false);
        }
        else if (this->checkGrade(executor.getGrade(), EXEC_GRADE_R, GRADE_MAX))
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
