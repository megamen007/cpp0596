/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:47:40 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:29:32 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"

AForm::AForm() : name("Danino") , is_signed(0) , r_sign_grade(15), r_execute_grade(12)
{
    if ( r_execute_grade > 150 )
        throw AForm::GradeTooLowException();

    if ( r_execute_grade < 1)
        throw AForm::GradeTooHighException();

    if ( r_sign_grade > 150 )
        throw AForm::GradeTooLowException();

    if ( r_sign_grade < 1)
        throw AForm::GradeTooHighException();

}
std::string AForm::get_Name()  const
{
    return this->name;
}
AForm& AForm::operator=(const AForm& newAForm)
{
    if(this != &newAForm)
    {
        this->is_signed = newAForm.is_signed;
    }
    return *this;
}

AForm::AForm(const AForm& newAForm) : name(newAForm.name) , r_sign_grade(newAForm.r_sign_grade) , r_execute_grade(newAForm.r_execute_grade) 
{
    is_signed = newAForm.is_signed; 
}

bool AForm::get_sign_status() const
{
    return this->is_signed;
}

int AForm::get_r_execute_grade() const
{
    return this->r_execute_grade;
}

int AForm::get_r_sign_grade()
{
    return this->r_sign_grade;
}

std::ostream & operator<<(std::ostream &outy ,AForm & newForm)
{
    outy << "Form name : " << newForm.get_Name() << std::endl;
    outy << "Foem signed Status : " << newForm.get_sign_status() << std::endl;
    outy << "Form required sign grade : " << newForm.get_r_sign_grade() << std::endl;
    outy << "Form required execute grade : " << newForm.get_r_execute_grade() << std::endl;
    return outy;
}

AForm::AForm(std::string _name, const int _r_sign_grade , const int _r_execute_grade) : name(_name) , is_signed(false) , r_sign_grade(_r_sign_grade), r_execute_grade(_r_execute_grade)
{
}


void AForm::besigned(Bureaucrat& Z)
{
    if (Z.getGrade() <= get_r_sign_grade() )
        is_signed = true;
    else 
        throw AForm::GradeTooLowException();
}




AForm::~AForm()
{
}