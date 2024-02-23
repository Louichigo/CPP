/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:26:06 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/06 15:54:57 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form test("test", 20, 220);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	Form attestation("Attestation", 20, 20);
	std::cout << attestation << std::endl;

	std::cout << std::endl;

	Bureaucrat Pat("Pat", 21);
	Pat.signForm(attestation);
	Pat.increase();
	Pat.signForm(attestation);

	std::cout << std::endl;

	std::cout << attestation << std::endl;
	std::cout << std::endl;
	Pat.signForm(attestation);

	std::cout << std::endl;
	return (0);
}