#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", false, 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &newS) : AForm(newS), target(newS.target)
{
}

PresidentialPardonForm::PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string name, bool is_signed , const int r_sign_grade , const int r_execute_grade)
{
(void) name;
(void) is_signed;
(void) r_sign_grade;
(void) r_execute_grade;


}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &newS)
{
    if (this != &newS)
    {
        AForm::operator=(newS);
        target = newS.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->get_sign_status())
        throw FormtNotSignedException();
    
    if (executor.getGrade() > this->get_r_execute_grade())
        throw GradeTooLowException();
    
    std::cout << target << "  has been pardoned by Zaphod Beeblebrox. " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}