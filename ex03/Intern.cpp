/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 05:39:23 by mboudrio          #+#    #+#             */
/*   Updated: 2024/09/17 05:39:24 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &intern){
	*this = intern;
}

Intern::~Intern(){}

Intern	&Intern::operator=(Intern const &intern){
	(void)intern;
	return *this;
}

AForm	*Intern::makeForm(std::string form, std::string target){
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*ret;
	int	i;

	i = 0;
	for (; i < 3; i++)
		if (form == forms[i])
			break ;
	switch (i)
	{
		case 0:
			ret = new RobotomyRequestForm(target);
			break ;
		case 1:
			ret = new PresidentialPardonForm(target);
			break ;
		case 2:
			ret = new ShrubberyCreationForm(target);
			break ;
		default:
			throw Intern::FormDoesNotExistException();
	}
	std::cout << "Intern creates " << ret->get_Name();
	return ret;

}

const char *Intern::FormDoesNotExistException::what() const throw(){
	return "Form does not exist.";
}