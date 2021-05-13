#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"
# include <string>

# define SIGN_GRADE_P 25
# define EXEC_GRADE_P 5

class PresidentialPardonForm : public Form  {

public:

    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm &  operator=(PresidentialPardonForm const & src);

    bool execute (Bureaucrat const & executor) const;

    std::string const & getTarget(void) const;
    void    action(void) const;

private:
    std::string _target;

};

#endif
