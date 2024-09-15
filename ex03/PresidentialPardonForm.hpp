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
        PresidentialPardonForm(std::string name, bool is_signed , const int r_sign_grade , const int r_execute_grade);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm( const PresidentialPardonForm  &newS);
        PresidentialPardonForm& operator=( const PresidentialPardonForm  &newS);
        ~PresidentialPardonForm();

    // Membre functions 
    void execute(Bureaucrat const & executor) const;

};



#endif

