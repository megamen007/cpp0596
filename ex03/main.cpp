/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:49:35 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 05:39:09 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


// int main()
// {
//     Intern SomeRandom;
//     Bureaucrat  Z("John", 10);
//     ShrubberyCreationForm D("Home");
//     RobotomyRequestForm R("BOB");
//     PresidentialPardonForm P("SALAH");
//     AForm *salah ;
    
//     try
//     {
//         D.besigned(Z);
//         std::cout << Z.getGrade() << std::endl;
//         std::cout << D.get_sign_status() << std::endl;
//         salah = SomeRandom.makeform("ShrubberyCreation", "   BOB"); 
//         salah->execute(Z);   
//     }
    
//     catch( AForm::GradeTooHighException & e)
//     {
//         std::cerr << "Caught Exception: " << e.what() << '\n';
//     }

//     catch( AForm::GradeTooLowException & e)
//     {
//         std::cerr << "Caught Exception: " << e.what() << '\n';
//     }


//     catch( Bureaucrat::GradeTooHighException & e)
//     {
//         std::cerr << "Caught Exception: " << e.what() << '\n';
//     }

//     catch( Bureaucrat::GradeTooLowException & e)
//     {
//         std::cerr << "Caught Exception: " << e.what() << '\n';
//     }

//     catch(AForm::FormtNotSignedException & e)
//     {
//         std::cerr << "Caught Exception: " << e.what() << '\n';
//     }
    
// }
int main()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}