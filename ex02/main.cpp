/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:48:02 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:46:18 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat  Z("John", 2);
    ShrubberyCreationForm D("RRR");
    RobotomyRequestForm R("BOB");
    PresidentialPardonForm P("SALAH");
    
    try
    {
        D.besigned(Z);
        D.execute(Z);
        //Z.executeForm(D);
        
        R.besigned(Z);
        R.execute(Z);
        //Z.executeForm(R);

        P.besigned(Z);
        P.execute(Z);
        //Z.executeForm(P);
    }
    

    catch( AForm::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch( AForm::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }


    catch( Bureaucrat::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch( Bureaucrat::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch(AForm::FormtNotSignedException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }
    
}