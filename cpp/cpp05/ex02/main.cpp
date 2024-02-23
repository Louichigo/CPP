/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:26:06 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 15:26:31 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "\033[32m";
	Bureaucrat bob("bob", 1);
	Bureaucrat noob("noob", 150);

	//ShrubberyCreationForm tests////////////////////
	ShrubberyCreationForm test("test");
	noob.signForm(test);
	noob.executeForm(test);
	bob.signForm(test);
	noob.executeForm(test);
	bob.executeForm(test);
	bob.signForm(test);
	/////////////////////////////////////////////////
	
	std::cout << "\033[33m" << std::endl;

	//RobotomyResquestForm tests/////////////////////
	RobotomyRequestForm poire("poire");
	noob.signForm(poire);
	noob.executeForm(poire);
	bob.signForm(poire);
	noob.executeForm(poire);
	bob.executeForm(poire);
	bob.signForm(poire);
	/////////////////////////////////////////////////
	
	std::cout << "\033[36m" << std::endl;

	//PresidentialPardonForm tests///////////////////
	PresidentialPardonForm pomme("pomme");
	noob.signForm(pomme);
	noob.executeForm(pomme);
	bob.signForm(pomme);
	noob.executeForm(pomme);
	bob.executeForm(pomme);
	bob.signForm(pomme);
	/////////////////////////////////////////////////

	//Destructors////////////////////////////////////
	std::cout << "\033[37m" << std::endl;
	return (0);
}