#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern {

public:

    Intern(void);
    Intern(Intern const & src);
    ~Intern(void);
    Intern &  operator=(Intern const & src);

    Form * makeForm(std::string const & formName, std::string const & target) const;

private:
    Form *newpres(void) const;
    Form *newrobot(void) const;
    Form *newshrub(void) const;
};

#endif
