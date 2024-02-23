/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:26:06 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 16:01:50 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	//Subject tests//////////////////////////////////////////////////////////////////
	Intern	someRandomIntern;
	AForm	*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	//personnal tests////////////////////////////////////////////////////////////////
	AForm *test;
	Bureaucrat bob("Bob", 1);

	test = someRandomIntern.makeForm("shrubbery creation", "sapins");
	bob.signForm(*test);
	bob.executeForm(*test);

	std::cout << std::endl;
	//bad form name
	AForm *noob;
	try
	{
		noob = someRandomIntern.makeForm("mauvais nom", "perdu");
		bob.signForm(*noob);
		bob.executeForm(*noob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	//destructors
	delete rrf;
	delete test;
	delete noob;
	return (0);
}