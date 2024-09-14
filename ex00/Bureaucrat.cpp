
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) , grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException() ;

}

Bureaucrat::Bureaucrat(const Bureaucrat& newBureacrat)
{
    name = newBureacrat.name;
    grade = newBureacrat.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& newBureacrat)
{
    if ( this != &newBureacrat)
    {
        this->grade = newBureacrat.grade;
        this->name = newBureacrat.name;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

std::string Bureaucrat::getName()
{
    return this->name;
}


void  Bureaucrat::grade_decrement()
{
    this->grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void  Bureaucrat::grade_increment()
{
    this->grade--;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}


std::ostream& operator<<(std::ostream &outy , Bureaucrat & boss)
{
    outy << boss.getName() << ", bureaucrat grade " << boss.getGrade();

    return outy;
}
