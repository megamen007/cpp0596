/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:46:51 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 03:59:18 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  Z("John", 150);

        std::cout << Z << std::endl;
        Z.grade_decrement();
        std::cout << "grade after decrement :" << Z.getGrade() << std::endl;


        Z.grade_increment();
        std::cout << "grade after increment :" << Z.getGrade() << std::endl;
        
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