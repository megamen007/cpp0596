#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern 
{
private:
    typedef AForm* (*formCreationfunctions)(std::string target);
    static AForm* CreatShrubberyForm(std::string target);
    static AForm* CreatRobotomyForm(std::string target);
    static AForm* CreatPresidentialForm(std::string target);
    
public:
    Intern();
    Intern(const Intern& newIntern);
    Intern& operator=(const Intern& newIntern);
    ~Intern();

    // Member functions
    AForm* makeform(std::string Formname, std::string Formtarget);

};





#endif