#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) :
    _name(name),
    _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) :
    _name(src.getName()),
    _grade(src.getGrade())
{}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &
Bureaucrat::operator=(Bureaucrat const & src)
{
    this->_grade = src.getGrade();
    return (*this);
}

std::string const &
Bureaucrat::getName(void) const
{
    return (this->_name);
}

int
Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}


void
Bureaucrat::incGrade(void)
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;    
}

void
Bureaucrat::decGrade(void)
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;    
}

const char *
Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Maximum grade is 1\n");
}


const char *
Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Minimum grade is 150\n");
}

std::ostream &
operator<<(std::ostream & o, Bureaucrat const & ins)
{
    o << ins.getName() << ": bureaucrat grade " << ins.getGrade() <<std::endl;
    return (o);
}