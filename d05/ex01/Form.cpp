#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) :
    _name(name),
    _signGrade(checkGrade(signGrade)),
    _execGrade(checkGrade(execGrade)),
    _isSigned(false)
{}

Form::Form(Form const & src) :
    _name(src.getName()),
    _signGrade(getSignGrade()),
    _execGrade(getExecGrade()),
    _isSigned(src.getIsSigned())
{}

Form::~Form(void) {}

Form &
Form::operator=(Form const & src)
{
    //NOT SURE HOW TO HANDLE THAT GUY
    this->_isSigned = src.getIsSigned();
    return (*this);
}

std::string
Form::getName(void) const
{
    return (_name);
}

bool       
Form::getIsSigned(void) const
{
    return (_isSigned);
}

int        
Form::getSignGrade(void) const
{
    return (_signGrade);
}

int        
Form::getExecGrade(void) const
{
    return (_execGrade);
}

int
Form::checkGrade(int grade) const
{
    if (grade < GRADE_MAX)
        throw GradeTooHighException();
    if (grade > GRADE_MIN)
        throw GradeTooLowException();
    return (grade);
}

bool
Form::beSigned(Bureaucrat const & b)
{
    if (b.getGrade() > this->_signGrade)
    {
        throw GradeTooLowException();
        return (false);
    }
    if (this->_isSigned)
        return (false);
    this->_isSigned = true;
    return (true);
}


const char *
Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high\n");
}

const char *
Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low\n");
}

std::ostream & operator<<(std::ostream & o, Form & f)
{
    o << "Form name: " << f.getName()
    << ", sign grade: " << f.getSignGrade()
    << ", exec grade: " << f.getExecGrade();

    if (f.getIsSigned())
        o << " ; Form is signed" << std::endl;
    else
        o << " ; Form is not signed" << std::endl;
    return (o);
}