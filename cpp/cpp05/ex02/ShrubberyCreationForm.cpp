/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:08:26 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/07 18:00:51 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	//std::cout << "ShrubberyCreationForm created" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm destroyed" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	std::cout << "Copy constructor for ShrubberCreationForm called" << std::endl;
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->setSign(rhs.getSign());
	this->target = rhs.target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == 0)
			throw (AForm::NotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw (AForm::GradeTooLowException());
	std::string filename = target;
	filename.append("_shrubbery");
	std::ofstream file(filename);
	if (file)
	{
		file << TREES << TREES << TREES << std::endl;
	}
	else
		std::cout << "File ERROR" << std::endl;
	file.close();
	return;
}