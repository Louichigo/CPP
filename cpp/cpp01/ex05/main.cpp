/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:38:44 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/09 14:45:26 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::cout << "\033[32m" << "DEBUG = "; 
	harl.complain("debug");
	std::cout << "\033[31m" << "INFO = ";
	harl.complain("info");
	std::cout << "\033[33m" << "WARNING = ";
	harl.complain("warning");
	std::cout << "\033[34m" << "ERROR = ";
	harl.complain("error");
	return 0;
}