/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:26:19 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/06 15:54:10 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
	std::cout << "Default bureaucrat created. He sucks" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name << " has been destroyed" << std::endl; 
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->grade = grade;
		std::cout << "Bureaucrat " << this->name << " has been created and his grade is " << this->grade << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	return;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->grade = rhs.grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increase()
{
	if (grade < 2)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->grade = grade - 1;
		std::cout << "Bureaucrat " << this->name << " has increase his grade and is now graded " << this->grade << std::endl;
	}	
}

void	Bureaucrat::decrease()
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 149)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->grade = grade + 1;
		std::cout << "Bureaucrat " << this->name << " has decrease his grade and he's now graded " << this->grade << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (o);
}