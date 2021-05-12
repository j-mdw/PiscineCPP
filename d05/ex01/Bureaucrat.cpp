#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) :
    _name(name),
    _grade(checkGrade(grade))
{}

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

void
Bureaucrat::signForm(Form & f) const
{
    bool ret;

    try {
        ret = f.beSigned(*this);
    }
    catch  (std::exception & e) {
        std::cout << this->_name << " can't sign " << f.getName()
        << ": grade too low" << std::endl;
        return ;
    }
    if (ret)
        std::cout << this->_name << " signs " << f.getName() << std::endl;
    else
        std::cout << this->_name << " can't sign " << f.getName() 
        << ": form is already signed" << std::endl;
}

int
Bureaucrat::checkGrade(int grade) const
{
    if (grade < GRADE_MAX)
        throw GradeTooHighException();
    if (grade > GRADE_MIN)
        throw GradeTooLowException();
    return (grade);
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