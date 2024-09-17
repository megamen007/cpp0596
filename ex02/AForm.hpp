/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:47:45 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 04:28:39 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:

    const std::string name;
    bool is_signed;
    const int r_sign_grade;
    const int r_execute_grade;

public:

    AForm();
    AForm(std::string name, const int r_sign_grade , const int r_execute_grade);
    AForm(const AForm& new_AForm);
    AForm& operator=(const AForm& new_AForm);
    ~AForm();

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

        class FormtNotSignedException : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Form Not Signed!!!!";
            };
            
    };

    // Getters

    std::string get_Name() const ;
    bool get_sign_status()const;
    int get_r_sign_grade();
    int get_r_execute_grade() const;

    // Member functions 

    void besigned(Bureaucrat &Z ) ;
    virtual void execute(Bureaucrat const & executor) const = 0;
    


};

std::ostream & operator<<(std::ostream& outy ,AForm& newAForm);



#endif