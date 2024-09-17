/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:47:57 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 02:44:29 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include "AForm.hpp"

class AForm;


class Bureaucrat
{
    private:
    const std::string name;
    int grade;

    public:
    
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& newBureacrat);
    Bureaucrat& operator=(const Bureaucrat& newBureaucrat);
    ~Bureaucrat();

    // Getters :

    int getGrade() const;
    std::string getName() const;

    // Member Functions :

    void grade_increment();
    void grade_decrement();
    void signForm(AForm &F);


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

    void executeForm(AForm const & form) const;


};

std::ostream& operator<<(std::ostream &outy ,  Bureaucrat & boss);









#endif