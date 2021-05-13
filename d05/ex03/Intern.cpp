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
    (void)src;
    return (*this);
}

Form *
Intern::newpres(std::string const & target) const
{
    return (new PresidentialPardonForm(target));
}

Form *
Intern::newrobot(std::string const & target) const
{
    return (new RobotomyRequestForm(target));
}

Form *
Intern::newshrub(std::string const & target) const
{
    return (new ShrubberyCreationForm(target));
}

Form *
Intern::makeForm(std::string const & formName, std::string const & target) const
{
    static Form *(Intern::*formArr[])(std::string const & target) const = {
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
        if (!formName.compare(names[i]))
        {
            std::cout << "Intern creates form " << formName << std::endl;
            return ((this->*formArr[i])(target));
        }
    }
    std::cout << formName << " is an unknown form" << std::endl;
    return (NULL);
}