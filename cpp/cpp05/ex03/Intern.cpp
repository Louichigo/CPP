/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:19:02 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 15:35:44 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "An intern has been created" << std::endl;
	return;
}

Intern::~Intern()
{
	std::cout << "Intern Dstroyed" << std::endl;
	return;
}

Intern::Intern(const Intern &src)
{
	*this = src;
	return;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	return *this;
}

AForm	*Intern::makeForm(std::string name, std::string target) const
{
	AForm *newform;
	typedef AForm* (Intern::*ptr_intern)(std::string target) const;

	std::string form_names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	ptr_intern OUILLE[] = {&Intern::makeShrub, &Intern::makeRobo, &Intern::makePardon};
	for(int i = 0; i < 3; i++)
	{
		if (form_names[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			newform = (this->*OUILLE[i])(target);
			return (newform);
		}
	}
	throw(Intern::WrongFormException());
}

const char *Intern::WrongFormException::what() const throw()
{
	return ("A wrong name has been given fo the form. Fire the intern!");
}

AForm	*Intern::makeShrub(std::string target) const
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeRobo(std::string target) const
{
	return new RobotomyRequestForm(target);
}

AForm	*Intern::makePardon(std::string target) const
{
	return new PresidentialPardonForm(target);
}