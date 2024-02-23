/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:10:51 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 15:55:05 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm created" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destroyed" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->setSign(rhs.getSign());
	this->target = rhs.target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getSign() == 0)
			throw (AForm::NotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw (AForm::GradeTooLowException());
	std::cout << "~RobotomyRequestForm make some drilling noises!~" << std::endl;
	std::srand(std::time(0));
	int random = std::rand() % 2;
	if (random == 0)
		std::cout << "RobotomyRequestForm: " << this->target << " has been robotomixzed!" << std::endl;
	else if (random == 1)
		std::cout << "RobotomyRequestForm: failed to robotomized " << this->target << std::endl;
	return;
}