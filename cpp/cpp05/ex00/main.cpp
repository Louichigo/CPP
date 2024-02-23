/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:26:06 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/06 15:09:15 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{	

	Bureaucrat aa("Jeremy", 54);
	std::cout << aa << std::endl;
	
	std::cout << "\n\n";	

	try
	{
		Bureaucrat bob("bob", 1);
		Bureaucrat mike("mike", 42);
		Bureaucrat x;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n\n" << std::endl;

	try
	{
		Bureaucrat biglow("biglow", 151);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	std::cout << "\n\n" << std::endl;

	try
	{
		Bureaucrat indecrease("indecrease", 1);
		indecrease.increase();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}