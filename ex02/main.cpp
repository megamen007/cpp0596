#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
    Bureaucrat  Z("John", 10);
    ShrubberyCreationForm D("Home");
    try
    {
        D.besigned(Z);
        
        D.execute(Z);
    }
    

    catch( AForm::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch( AForm::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }


    catch( Bureaucrat::GradeTooHighException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch( Bureaucrat::GradeTooLowException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }

    catch(AForm::FormtNotSignedException & e)
    {
        std::cerr << "Caught Exception: " << e.what() << '\n';
    }
    
}