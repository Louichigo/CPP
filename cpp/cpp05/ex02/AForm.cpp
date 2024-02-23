/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:25:52 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 15:12:20 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("Form"), sign(false), grade_sign(150), grade_exec(150)
{
	std::cout << "A default form has been created. Surely something not really important." << std::endl;
}

AForm::~AForm()
{
	std::cout << "Form " << this->name << " destroyed." << std::endl;
}

AForm::AForm(std::string name, int grade_sign, int grade_exec): name(name), sign(false), grade_sign(grade_sign), grade_exec(grade_exec)
{
	if (this->grade_sign < 1 || this->grade_exec < 1)
		throw AForm::GradeTooHighException();
	else if (this->grade_sign > 150 || this->grade_exec > 150)
		throw AForm::GradeTooLowException();
	else
		std::cout << "Form " << this->name << " created. It needs grade " << this->grade_sign << " to be signed and grade " << this->grade_exec << " to be executed" << std::endl;
}

AForm::AForm(const AForm &src): name(src.name), sign(false), grade_sign(src.grade_sign), grade_exec(src.grade_exec)
{
	std::cout << "A copy of the form " << this->name << " has been created" << std::endl;
	*this = src;
	return;
}

AForm	&AForm::operator=(const AForm &rhs)
{
	return *this;	
}

std::string	AForm::getName() const
{
	return this->name;
}

bool	AForm::getSign() const
{
	return this->sign;
}

int	AForm::getGradeSign() const
{
	return this->grade_sign;
}

int AForm::getGradeExec() const
{
	return this->grade_exec;
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (this->sign == true)
	{
		throw (AForm::AlreadySignException());
	}
	if (b.getGrade() <= this->grade_sign)
	{
		this->sign = true;
	}
	else
		throw (AForm::GradeTooLowException());
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

const char	*AForm::AlreadySignException::what() const throw()
{
	return ("the form is already signed.");
}

const char	*AForm::NotSignedException::what() const throw()
{
	return ("it's not signed yet.");
}

std::ostream &operator<<(std::ostream &o, AForm const &i)
{
	o << "****************************************" << std::endl;
	o << "Form name : " << i.getName() <<std::endl;
	o << "Signed (1 = true || 0 = false): " << i.getSign() << std::endl;
	o << "Minimum grade required to sign : " << i.getGradeSign() << std::endl;
	o << "Minimum grade required to execute : " << i.getGradeExec() << std::endl;
	o << "****************************************" << std::endl;
	return o;
}

void	AForm::setSign(bool sign)
{
	this->sign = sign;
}