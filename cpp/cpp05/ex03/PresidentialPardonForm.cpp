/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:11:20 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 15:55:12 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm created" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destroyed" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl;
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->setSign(rhs.getSign());
	this->target = rhs.target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getSign() == 0)
			throw (AForm::NotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw (AForm::GradeTooLowException());
	std::cout << "PresidentialPardonForm: " << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return;
}