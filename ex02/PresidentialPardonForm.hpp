/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:48:22 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:32:57 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
    private:
        std::string target;
    public:

        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm( const PresidentialPardonForm  &newS);
        PresidentialPardonForm& operator=( const PresidentialPardonForm  &newS);
        ~PresidentialPardonForm();

    // Membre functions 
    void execute(Bureaucrat const & executor) const;

};



#endif

