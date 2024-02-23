/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:08:39 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/07 18:01:28 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

#define TREES "\
    ^    \n\
   / \\   \n\
  /   \\  \n\
 /     \\ \n\
/       \\\n\
   ||    \n"


class ShrubberyCreationForm : public AForm
{
private:
	std::string	target;

public:
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);

	virtual void execute(Bureaucrat const &executor) const;
};

#endif