#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& newIntern)
{
    (void)newIntern;
}

Intern& Intern::operator=(const Intern& newIntern)
{
    (void)newIntern;
    return *this;
}

Intern::~Intern()
{
}

AForm* Intern::CreatShrubberyForm(std::string target)
{
    std::cout << "Intern creates" << target << std::endl;
    return new ShrubberyCreationForm(target);
}

AForm* Intern::CreatRobotomyForm(std::string target)
{
    std::cout << "Intern creates" << target << std::endl;
    return new RobotomyRequestForm(target);
}
 AForm* Intern::CreatPresidentialForm(std::string target)
{
    std::cout << "Intern creates" << target << std::endl;
    return new PresidentialPardonForm(target);
}

AForm * Intern::makeform(std::string Formname, std::string Formtarget)
{
    std::string formnames[] = { "ShrubberyCreation" , "RobotomyReques" , "PresidentialPardon"};
    formCreationfunctions formCreat[] = { &Intern::CreatShrubberyForm , &Intern::CreatRobotomyForm , &Intern::CreatRobotomyForm };

    for(int i = 0; i < 3 ; i++)
    {
        if(formnames[i] == Formname)
            return formCreat[i](Formtarget);
    }
    std::cout << " Unkown form type , verifie your input Sir " << std::endl;
    return NULL;
}