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
        ShrubberyCreationForm(std::string name, bool is_signed , const int r_sign_grade , const int r_execute_grade);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm( const ShrubberyCreationForm  &newS);
        ShrubberyCreationForm& operator=( const ShrubberyCreationForm  &newS);
        ~ShrubberyCreationForm();

    // Membre functions 
    void execute(Bureaucrat const & executor) const;

};



#endif