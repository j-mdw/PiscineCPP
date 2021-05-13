#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"
# include <string>

# define SIGN_GRADE_R 72
# define EXEC_GRADE_R 45

class RobotomyRequestForm : public Form  {

public:

    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm &  operator=(RobotomyRequestForm const & src);

    bool execute (Bureaucrat const & executor) const;

    std::string const & getTarget(void) const;
    void    action(void) const;

private:
    std::string _target;

};

#endif
