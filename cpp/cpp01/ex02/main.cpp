/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:13:33 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/08 17:37:34 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string adress = " << "\033[32m" << &str << "\033[0m" << std::endl;
	std::cout << "string adress by stringPTR = " << "\033[32m" << stringPTR << "\033[0m" << std::endl;
	std::cout << "string adress by stringREF = " << "\033[32m" << &stringREF << "\033[0m" << "\n" << std::endl;
	std::cout << "string value = " << "\033[33m" << str << "\033[0m" << std::endl;
	std::cout << "string value by stringPTR = " << "\033[33m" << *stringPTR << "\033[0m" << std::endl;
	std::cout << "string value by stringREF = " << "\033[33m" << stringREF << "\033[0m" << std::endl;

	return 0;
}