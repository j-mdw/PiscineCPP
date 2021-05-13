#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int
main(void)
{
    std::cout << "-----Test 1-----" << std::endl;
    try {
        Bureaucrat br149("Pierre", 149);
        std::cout << br149;
        br149.decGrade();
        std::cout << br149;
        br149.decGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    std::cout << "-----Test 2-----" << std::endl;
    try {
        Bureaucrat br0("Jackline", 0);
        std::cout << br0;
        br0.incGrade();
        std::cout << br0;
        br0.decGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    std::cout << "-----Test 3-----" << std::endl;
    try {
        Bureaucrat  br1("Jean", 73);
        RobotomyRequestForm f1("Tamtam");
        std::cout << f1;
        br1.signForm(f1);
        std::cout << f1;
        br1.incGrade();
        br1.signForm(f1);
        br1.signForm(f1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    std::cout << "-----Test 3-----" << std::endl;
    {
        try {
            Bureaucrat b1("Mouse", 150);
            Bureaucrat b2("Cat", 138);
            Form *f1 = new ShrubberyCreationForm("Pomme");
            f1->execute(b1);
            b1.signForm(*f1);
            
            b2.signForm(*f1);
            f1->execute(b2);
            b2.incGrade();
            f1->execute(b2);
            delete f1;
            f1 = new RobotomyRequestForm("Dingdong");
            Bureaucrat b3("Dog", 30);
            b3.signForm(*f1);
            f1->execute(b3);
            
            delete f1;
            f1 = new PresidentialPardonForm("Trimp");
            Bureaucrat b4("Zebra", 1);
            b4.signForm(*f1);
            b4.executeForm(*f1);
            b3.executeForm(*f1);

            delete f1;
            f1 = new RobotomyRequestForm("Toctoc");
            b3.executeForm(*f1);
            delete f1;
        }
        catch (std::exception & e)
        {
            std::cout << e.what();
        }
    }
    std::cout << "-----Test 3-----" << std::endl;
    try {
        Intern i1;
        Form *f1;
        Form *f2;
        Form *f3;

        f1 = i1.makeForm("Tagada", "Bob");
        f1 = i1.makeForm("robotomy request", "Ela");
        f2 = i1.makeForm("pardon request", "Johny");
        f3 = i1.makeForm("shrubbery creation", "Cindrilla");
        std::cout << *f3;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
}