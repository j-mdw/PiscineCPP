#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & src)
{
    (void)src;
}

Intern::~Intern(void) {}

Intern &
Intern::operator=(Intern const & src)
{
    return (*this);
}

Form *
Intern::newpres(void) const
{
    return (new PresidentialPardonForm());
}

Form *
Intern::newrobot(void) const
{
    return (new RobotomyRequestForm());
}

Form *
Intern::newshrub(void) const
{
    return (new ShrubberyCreationForm());
}

Form *
Intern::makeForm(std::string const & formName, std::string const & target) const
{
    static Form *(Intern::*formArr[])(void) const = {
        &Intern::newrobot,
        &Intern::newpres,
        &Intern::newshrub
    };
    static std::string names[] = {
        "robotomy request",
        "pardon request",
        "shrubbery creation"
    };

    for (int i = 0; i < 3; i++)
    {
        if (target.compare(names[i]))
            return ((this->*formArr[i])());
    }
    return (NULL);
}