/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:46:39 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 03:54:56 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) , grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException() ;

}

Bureaucrat::Bureaucrat(const Bureaucrat& newBureacrat) :  name( newBureacrat.name ) , grade ( newBureacrat.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& newBureacrat)
{
    if ( this != &newBureacrat)
    {
        *this = newBureacrat;
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
