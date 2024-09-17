/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:48:42 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:34:31 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",  145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &newS) : AForm(newS), target(newS.target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",  145, 137), target("default")
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &newS)
{
    if (this != &newS)
    {
        AForm::operator=(newS);
        target = newS.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->get_sign_status())
    {
        throw AForm::FormtNotSignedException();
    }

    if (executor.getGrade() > this->get_r_execute_grade())
    {
        throw GradeTooLowException();
    }

    std::string filenameStr = this->target + "_shrubbery";
    const char *filename = filenameStr.c_str();

    std::ofstream out(filename);
    if (!out)
    {
        std::cerr << "Error creating Your Tree File !!" << std::endl;
        return;
    }
    
    out << "        *    " << std::endl;
    out << "       ***   " << std::endl;
    out << "      *****  " << std::endl;
    out << "     ******* " << std::endl;
    out << "    ********* " << std::endl;
    out << "   ************ " << std::endl;
    out << "  ************** " << std::endl;
    out << "       |||   " << std::endl;
    out << "       |||   " << std::endl;
    out << "       |||   " << std::endl;

    out.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}