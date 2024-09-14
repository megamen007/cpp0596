#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  Z("John", 150);

        std::cout << Z << std::endl;
        Z.grade_decrement();
        std::cout << "grade after decrement :" << Z.getGrade() << std::endl;


        Z.grade_increment();
        std::cout << "grade after increment :" << Z.getGrade() << std::endl;
        
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