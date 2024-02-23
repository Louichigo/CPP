/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:10:03 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/16 15:10:29 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	AForm *makeShrub(std::string target) const;
	AForm *makeRobo(std::string target) const;
	AForm *makePardon(std::string target) const;

public:
	Intern();
	~Intern();
	Intern(const Intern &src);
	Intern	&operator=(const Intern &rhs);

	AForm *makeForm(std::string name, std::string target) const;

	class WrongFormException : public std::exception {
	public:	
		virtual const char *what() const throw();
	};
	
};

#endif