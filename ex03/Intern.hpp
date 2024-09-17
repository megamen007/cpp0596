/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:49:30 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 05:33:14 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern 
{    
    public:
        Intern();
        Intern(const Intern& newIntern);
        Intern& operator=(const Intern& newIntern);
        ~Intern();
        class FormDoesNotExistException: public std::exception{
		    public:
			    virtual const char *what() const throw();
	    };

        // Member functions
        AForm* makeForm(std::string Formname, std::string Formtarget);

};





#endif