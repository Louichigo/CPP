/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:26:01 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/07 17:44:59 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool				sign;
	const int			grade_sign;
	const int			grade_exec;

public:
	AForm();
	~AForm();
	AForm(std::string name, int grade_sign, int grade_exec);
	AForm(const AForm &src);
	AForm	&operator=(const AForm &rhs);

	std::string	getName() const;
	bool		getSign() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void		setSign(bool sign);

	void	beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception {
	public:	
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class AlreadySignException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class NotSignedException : public std::exception {
	public:	
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, AForm const &i);

#endif