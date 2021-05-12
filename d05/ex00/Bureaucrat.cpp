#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) :
    _name(name),
    _grade(grade)
{
    try
    {
        if (grade < 1)
            throw std::exception();
        else if (grade > 150)
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
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

// Bureaucrat::GradeTooHighException
// Bureaucrat::GradeTooLowException

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
    if (this->_grade > 1)
        this->_grade--;    
}

void
Bureaucrat::decGrade(void)
{
    if (this->_grade < 150)
        this->_grade++;    
}

std::ostream &
operator<<(std::ostream & o, Bureaucrat const & ins)
{
    o << ins.getName() << ": bureaucrat grade " << ins.getGrade() <<std::endl;
    return (o);
}

