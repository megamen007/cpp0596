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
    std::string name;
    int grade;

    public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& newBureacrat);
    Bureaucrat& operator=(const Bureaucrat& newBureaucrat);
    ~Bureaucrat();

    // Getters :

    int getGrade() const;
    std::string getName();

    // Member Functions :

    void grade_increment();
    void grade_decrement();
    void signForm(AForm &F);


    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() 
            {
                return "Grade Too High !!!!";
            };
            
    };

    class GradeTooLowException : public std::exception
    {
        public:
            const char *what()
            {
                return "Grade Too Low !!!!";
            };
            
    };


};

std::ostream& operator<<(std::ostream &outy ,  Bureaucrat & boss);









#endif