/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:31:21 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/21 14:05:51 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>

class ScalarConverter
{
private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	
	static bool	isChar(std::string str);
	static bool	isInt(std::string str);
	static bool	isFloat(std::string str);
	static bool	isDouble(std::string str);

	static void	printChar(std::string str);
	static void	printInt(std::string str);
	static void	printFloat(std::string str);
	static void	printDouble(std::string str);

	static void	CharConversion(char c, int i, std::string str);
	static void IntConversion(int i, std::string str);

public:
	static void convert(std::string str);
};

#endif