#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("ShrubberyCreationForm", SIGN_GRADE_S, EXEC_GRADE_S),
    _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
    Form(src.getName(), src.getSignGrade(), src.getExecGrade()),
    _target(src.getTarget())
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
    Form::operator = (src);
    this->_target = src.getTarget();
    return (*this);
}

std::string const &
ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

void
ShrubberyCreationForm::action(void) const
{
    std::ofstream ofs;

    ofs.open((this->getTarget() + "_shrubbery").c_str());
    if (ofs.is_open())
    {   
        ofs <<
        "    *\n   /_\\\n  /_ _\\\n /_   _\\\n/_     _\\\n    |\n\n"
        << "    $\n   \\_/\n  \\_ _/\n \\_   _/\n\\_     _/\n    |\n"
        << std::endl;

        ofs.close();
    }
    else
        std::cout << "Could not open file" << std::endl;
}

bool
ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
    try
    {
        if (!this->getIsSigned())
        {
            std::cout << "Form is not signed" << std::endl;
            return (false);
        }
        else if (this->checkGrade(executor.getGrade(), EXEC_GRADE_S, GRADE_MAX))
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
