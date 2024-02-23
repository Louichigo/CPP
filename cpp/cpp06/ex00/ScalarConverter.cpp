/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:31:11 by lobertho          #+#    #+#             */
/*   Updated: 2024/02/21 14:31:39 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &src) {*this = src;}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {return *this;}

void	ScalarConverter::convert(std::string str)
{
	if (isChar(str) == true)
	{
		std::cout << "CHAR TYPE" << std::endl;
		printChar(str);
	}
	else if (isInt(str) == true)
	{
		std::cout << "INT TYPE" << std::endl;
		printInt(str);
	}
	else if (isFloat(str) == true)
	{
		std::cout << "FLOAT TYPE" << std::endl;
		printFloat(str);
	}
	else if (isDouble(str) == true)
	{
		std::cout << "DOUBLE TYPE" << std::endl;
		printDouble(str);
	}
	else
		std::cerr << "Error: type of what you want to correct is unknown." << std::endl;
}

void	ScalarConverter::CharConversion(char c, int i, std::string str)
{
	if (std::isnan(std::atof(str.c_str())))
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(c) && i < 128 && i >= 0)
		std::cout << "char: non displayable" << std::endl;
	else if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
}

void	ScalarConverter::IntConversion(int i, std::string str)
{
	if (std::isnan(std::atof(str.c_str())))
		std::cout << "char: impossible" << std::endl;
	else if (i <= INT_MIN || i >= INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void	ScalarConverter::printChar(std::string str)
{
	char	c = str[0];
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::printInt(std::string str)
{
	int		i = std::atoi(str.c_str());
	char	c = static_cast<char>(i);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);

	CharConversion(c, i, str);
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::printFloat(std::string str)
{
	float	f = std::atof(str.c_str());
	char	c = static_cast<char>(f);
	int		i = static_cast<int>(f);
	double	d = static_cast<double>(f);

	CharConversion(c, i, str);
	IntConversion(i, str);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::printDouble(std::string str)
{
	double	d = std::atof(str.c_str());
	char	c = static_cast<char>(d);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);

	CharConversion(c, i, str);
	IntConversion(i, str);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

bool	ScalarConverter::isChar(std::string str)
{
	if (str.size() == 1 && std::isalpha(str[0]) && std::isprint(str[0]))
		return true;
	else
		return false;
}

bool	ScalarConverter::isInt(std::string str)
{
	try
	{
		size_t pos;
		int value = std::stoi(str, &pos);

		if (pos == str.length())
			return true;
		else
			return false;
	}
	catch(const std::exception& e)
	{
	}
	return false;
}

bool	ScalarConverter::isFloat(std::string str)
{
	char *endPtr;
	int	fcount = 0;
	int	pointcount = 0;
	
	std::strtof(str.c_str(), &endPtr);
	if (*endPtr != 'f')
		return false;
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (str[i] == 'f')
			fcount++;
		if (str[i] == '.')
			pointcount++;
	}
	if (str.compare("nanf") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0)
		return true;
	if (str.find_first_of(".") - str.find_first_of("f") == 1 || 
			str.find_first_of(".") - str.find_first_of("f") == -1 ||
			str[str.find_first_of("f") + 1] != '\0')
		return false;
	return (fcount == 1 && pointcount == 1);
}

bool	ScalarConverter::isDouble(std::string str)
{
	try
	{
		size_t pos;
		double value = std::stof(str, &pos);

		if (pos == str.length() && str.find_first_of(".") != 0 && std::isdigit(str[str.find_first_of(".") + 1]) == true)
			return true;
		else
			if (str.compare("nanf") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0)
				return true;
			return false;
	}
	catch(const std::exception& e)
	{
	}
	return false;
}

