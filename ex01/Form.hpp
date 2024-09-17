/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:47:19 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:15:51 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:

        const std::string name;
        bool is_signed;
        const int r_sign_grade;
        const int r_execute_grade;

    public:

        Form();
        Form(std::string name, int grade_to_sign, int grade_to_exec);
        Form(const Form& new_Form);
        Form& operator=(const Form& new_Form);
        ~Form();

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what()  const throw()
                {
                    return "Grade Too High !!!!";
                };
                
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return "Grade Too Low !!!!";
                };
                
        };

        // Getters

        std::string get_Name();
        bool get_sign_status();
        int get_r_sign_grade();
        int get_r_execute_grade();

        // Member functions 

        void besigned(Bureaucrat &Z );
        


};

std::ostream & operator<<(std::ostream& outy ,Form& newForm);



#endif