#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &newS) : AForm(newS), target(newS.target)
{
}

RobotomyRequestForm::RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string name, bool is_signed , const int r_sign_grade , const int r_execute_grade)
{
(void) name;
(void) is_signed;
(void) r_sign_grade;
(void) r_execute_grade;


}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &newS)
{
    if (this != &newS)
    {
        AForm::operator=(newS);
        target = newS.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->get_sign_status())
        throw FormtNotSignedException();
    
    if (executor.getGrade() > this->get_r_execute_grade())
        throw GradeTooLowException();
    
    std::cout << "//*/ Drilling noises /*//" << std::endl;

    srand(time(NULL));
    int random_value = rand() % 2;
    if( random_value == 0)
        std::cout << this->target << "  has been robotomized successfully !" << std::endl;
    else
    std::cout << "The robotomy failed" << std::endl;


}

RobotomyRequestForm::~RobotomyRequestForm()
{
}