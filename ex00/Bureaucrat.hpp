/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:46:47 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 02:44:39 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <fstream>
#include <exception>




class Bureaucrat
{
    private:
    
    const std::string name;
    int grade;

    public:
    
    Bureaucrat(std::string name, int grade) ;
    Bureaucrat(const Bureaucrat& newBureacrat);
    Bureaucrat& operator=(const Bureaucrat& newBureaucrat);
    ~Bureaucrat();

    // Getters :

    int getGrade();
    std::string getName();

    // Member Functions :

    void grade_increment();
    void grade_decrement();


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


};

std::ostream& operator<<(std::ostream &outy ,  Bureaucrat & boss);









#endif