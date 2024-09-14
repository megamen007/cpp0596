#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  Z("John", 16);
    Form F;
    try
    {

        std::cout << F << std::endl;

        F.besigned(Z);

        std::cout << F << std::endl;

    }

    catch( Form::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch( Form::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    try
    {
        Z.signForm(F);
    }

    catch( Bureaucrat::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch( Bureaucrat::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }
    
}