#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <string>
# include <fstream>

# define SIGN_GRADE_S 145
# define EXEC_GRADE_S 137

class ShrubberyCreationForm : public Form  {

public:

    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm &  operator=(ShrubberyCreationForm const & src);

    bool execute (Bureaucrat const & executor) const;

    std::string const & getTarget(void) const;
    void    action(void) const;

private:
    std::string _target;

};

#endif
