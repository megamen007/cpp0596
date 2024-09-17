/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:50:03 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:54:48 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm( const RobotomyRequestForm  &newS);
        RobotomyRequestForm& operator=( const RobotomyRequestForm  &newS);
        ~RobotomyRequestForm();

    // Membre functions 
    void execute(Bureaucrat const & executor) const;

};



#endif