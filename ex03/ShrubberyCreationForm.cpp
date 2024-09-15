#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &newS) : AForm(newS), target(newS.target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name, bool is_signed , const int r_sign_grade , const int r_execute_grade)
{
(void) name;
(void) is_signed;
(void) r_sign_grade;
(void) r_execute_grade;


}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &newS)
{
    if (this != &newS)
    {
        AForm::operator=(newS);
        target = newS.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->get_sign_status())
    {
        throw AForm::FormtNotSignedException();
    }

    if (executor.getGrade() > this->get_r_execute_grade())
    {
        throw GradeTooLowException();
    }

    std::string filenameStr = this->target + "_shrubbery";
    const char *filename = filenameStr.c_str();

    std::ofstream out(filename);
    if (!out)
    {
        std::cerr << "Error creating Your Tree File !!" << std::endl;
        return;
    }
    out << "        *    " << std::endl;
    out << "       ***   " << std::endl;
    out << "      *****  " << std::endl;
    out << "     ******* " << std::endl;
    out << "    ********* " << std::endl;
    out << "   ************ " << std::endl;
    out << "  ************** " << std::endl;
    out << "       |||   " << std::endl;
    out << "       |||   " << std::endl;
    out << "       |||   " << std::endl;

    out.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}