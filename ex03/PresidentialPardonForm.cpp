/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:49:48 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:53:24 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &newS) : AForm(newS), target(newS.target)
{
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm" , 25 , 5 ) , target("default") 
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &newS)
{
    if (this != &newS)
    {
        AForm::operator=(newS);
        target = newS.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->get_sign_status())
        throw FormtNotSignedException();
    
    if (executor.getGrade() > this->get_r_execute_grade())
        throw GradeTooLowException();
    
    std::cout << target << "  has been pardoned by Zaphod Beeblebrox. " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}