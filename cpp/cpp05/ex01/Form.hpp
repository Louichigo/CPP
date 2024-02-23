/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:26:01 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/06 15:40:04 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				sign;
	const int			grade_sign;
	const int			grade_exec;

public:
	Form();
	~Form();
	Form(std::string name, int grade_sign, int grade_exec);
	Form(const Form &src);
	Form	&operator=(const Form &rhs);

	std::string	getName() const;
	bool		getSign() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void	beSigned(Bureaucrat &b);

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

};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif