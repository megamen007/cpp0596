#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

    std::string name;
    bool is_signed;
    const int r_sign_grade;
    const int r_execute_grade;

public:
    Form();
    Form(const Form& new_Form);
    Form& operator=(const Form& new_Form);
    ~Form();

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