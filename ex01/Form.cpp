/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:47:14 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:15:07 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Form.hpp"

Form::Form() : name("Danino") , is_signed(0) , r_sign_grade(15), r_execute_grade(12)
{
    if ( r_execute_grade > 150 )
        throw Form::GradeTooLowException();

    if ( r_execute_grade < 1)
        throw Form::GradeTooHighException();

    if ( r_sign_grade > 150 )
        throw Form::GradeTooLowException();

    if ( r_sign_grade < 1)
        throw Form::GradeTooHighException();

}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec): name(name), is_signed(0), r_sign_grade(grade_to_sign), r_execute_grade(grade_to_exec){
    if ( r_execute_grade > 150 )
        throw Form::GradeTooLowException();

    if ( r_execute_grade < 1)
        throw Form::GradeTooHighException();

    if ( r_sign_grade > 150 )
        throw Form::GradeTooLowException();

    if ( r_sign_grade < 1)
        throw Form::GradeTooHighException();
}
std::string Form::get_Name() 
{
    return this->name;
}
Form& Form::operator=(const Form& newForm)
{
    if(this != &newForm)
    {

    this->is_signed = newForm.is_signed;
    }
    return *this;
}

Form::Form(const Form& newForm) :  name(newForm.name) , r_sign_grade(newForm.r_sign_grade) , r_execute_grade(newForm.r_execute_grade) 
{
    is_signed = newForm.is_signed; 
}

bool Form::get_sign_status()
{
    return this->is_signed;
}

int Form::get_r_execute_grade()
{
    return this->r_execute_grade;
}

int Form::get_r_sign_grade()
{
    return this->r_sign_grade;
}

std::ostream & operator<<(std::ostream &outy ,Form & newForm)
{
    outy << "Form name : " << newForm.get_Name() << std::endl;
    outy << "Foem signed Status : " << newForm.get_sign_status() << std::endl;
    outy << "Form required sign grade : " << newForm.get_r_sign_grade() << std::endl;
    outy << "Form required execute grade : " << newForm.get_r_execute_grade() << std::endl;
    return outy;
}

void Form::besigned(Bureaucrat& Z)
{
    if (Z.getGrade() <= get_r_sign_grade() )
        is_signed = true;
    else 
        throw Form::GradeTooLowException();
}




Form::~Form()
{
}