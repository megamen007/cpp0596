#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name, bool is_signed , const int r_sign_grade , const int r_execute_grade);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm( const RobotomyRequestForm  &newS);
        RobotomyRequestForm& operator=( const RobotomyRequestForm  &newS);
        ~RobotomyRequestForm();

    // Membre functions 
    void execute(Bureaucrat const & executor) const;

};



#endif