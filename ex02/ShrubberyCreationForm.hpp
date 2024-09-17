/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:48:49 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:33:19 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
    private:
        std::string target;
    public:
    
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm( const ShrubberyCreationForm  &newS);
        ShrubberyCreationForm& operator=( const ShrubberyCreationForm  &newS);
        ~ShrubberyCreationForm();

    // Membre functions 
    void execute(Bureaucrat const & executor) const;

};



#endif