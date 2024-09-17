/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:49:58 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:54:23 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &newS) : AForm(newS), target(newS.target)
{
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default ")
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &newS)
{
    if (this != &newS)
    {
        AForm::operator=(newS);
        target = newS.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->get_sign_status())
        throw FormtNotSignedException();
    
    if (executor.getGrade() > this->get_r_execute_grade())
        throw GradeTooLowException();
    
    std::cout << "//*/ Drilling noises /*//" << std::endl;

    srand(time(NULL));
    int random_value = rand() % 2;
    if( random_value == 0)
        std::cout << this->target << "  has been robotomized successfully !" << std::endl;
    else
    std::cout << "The robotomy failed" << std::endl;


}

RobotomyRequestForm::~RobotomyRequestForm()
{
}