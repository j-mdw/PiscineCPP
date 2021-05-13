#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <ostream>

# define GRADE_MIN 150
# define GRADE_MAX 1

class Form {

public:

    Form(void);
    Form(std::string name, int signGrade, int execGrade);
    Form(Form const & src);
    virtual ~Form(void);

    Form &  operator=(Form const & src);

    std::string getName(void) const;
    bool        getIsSigned(void) const;
    int         getSignGrade(void) const;
    int         getExecGrade(void) const;

    int         checkGrade(int grade, int min, int max) const;
    bool        beSigned(Bureaucrat const &);

    virtual bool execute (Bureaucrat const & executor)const = 0;

    class GradeTooHighException : public std::exception
    {
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char * what() const throw();
    };

private:
    std::string const   _name;
    int const           _signGrade;
    int const           _execGrade;
    bool                _isSigned;

};

std::ostream & operator<<(std::ostream & o, Form & f);

#endif
