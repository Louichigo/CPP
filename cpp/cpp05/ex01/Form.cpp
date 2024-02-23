/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:25:52 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 15:12:30 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Form"), sign(false), grade_sign(150), grade_exec(150)
{
	std::cout << "A default form has been created. Surely something not really important." << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << this->name << " destroyed." << std::endl;
}

Form::Form(std::string name, int grade_sign, int grade_exec): name(name), sign(false), grade_sign(grade_sign), grade_exec(grade_exec)
{
	if (this->grade_sign < 1 || this->grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (this->grade_sign > 150 || this->grade_exec > 150)
		throw Form::GradeTooLowException();
	else
		std::cout << "Form " << this->name << " created and needs grade " << this->grade_sign << " to be signed" << std::endl;
}

Form::Form(const Form &src): name(src.name), sign(false), grade_sign(src.grade_sign), grade_exec(src.grade_exec)
{
	std::cout << "A copy of the form " << this->name << " has been created" << std::endl;
	*this = src;
	return;
}

Form	&Form::operator=(const Form &rhs)
{
	return *this;	
}

std::string	Form::getName() const
{
	return this->name;
}

bool	Form::getSign() const
{
	return this->sign;
}

int	Form::getGradeSign() const
{
	return this->grade_sign;
}

int Form::getGradeExec() const
{
	return this->grade_exec;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (this->sign == true)
	{
		throw (Form::AlreadySignException());
	}
	if (b.getGrade() <= this->grade_sign)
	{
		this->sign = true;
	}
	else
		throw (Form::GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

const char	*Form::AlreadySignException::what() const throw()
{
	return ("the form is already signed.");
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "****************************************" << std::endl;
	o << "Form name : " << i.getName() <<std::endl;
	o << "Signed (1 = true || 0 = false): " << i.getSign() << std::endl;
	o << "Minimum grade required to sign : " << i.getGradeSign() << std::endl;
	o << "Minimum grade required to execute : " << i.getGradeExec() << std::endl;
	o << "****************************************" << std::endl;
	return o;
}