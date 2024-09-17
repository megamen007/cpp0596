/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:47:24 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:17:43 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  Z("John", 16);
    Form F("lala", 15, 1);
    try
    {

        std::cout << F << std::endl;

        F.besigned(Z);

        std::cout << F << std::endl;

    }catch( Form::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }
    catch( Form::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    try
    {
        Z.signForm(F);
    }

    catch( Bureaucrat::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch( Bureaucrat::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }
    
}