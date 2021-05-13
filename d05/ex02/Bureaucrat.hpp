#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <exception>
# include <iostream>

# define GRADE_MIN 150
# define GRADE_MAX 1

class Form;

class Bureaucrat {

public:

    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat(void);

    Bureaucrat &  operator=(Bureaucrat const & src);

    std::string const & getName(void) const;
    int getGrade(void) const;
    void incGrade(void);
    void decGrade(void);
    int checkGrade(int grade) const;

    void signForm(Form &) const;
    void executeForm(Form const & form) const;
    class GradeTooHighException : public std::exception
    {
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char * what() const throw();
    };

private:

    std::string const _name;
    int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & ins);

#endif
