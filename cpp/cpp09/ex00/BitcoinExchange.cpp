/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:38:35 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/12 18:41:47 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	data("data.csv");
	std::string		line;

	//std::cout << "BitcoinExchange constructor called" << std::endl;
	if (!data)
		std::cerr << "File error." << std::endl;
	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::string key = line.substr(0, line.find_first_of(","));
		float value = std::atof(line.substr(line.find_first_of(",") + 1).c_str());
		this->database[key] = value;
	}
	data.close();
}

BitcoinExchange::~BitcoinExchange()
{
	//std::cout << "BitcoinExchange destructor called" << std::endl;
	return;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	this->database = rhs.database;
	return *this;
}

void BitcoinExchange::evaluate(std::string &filename)
{
	std::ifstream	inputfile(filename.c_str());
	std::string		line;
	std::string		key;
	float			value;
	float			result;
	size_t			pipe;

	if (!inputfile.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}
	std::getline(inputfile, line);
	while(std::getline(inputfile, line))
	{
		pipe = line.find('|');
		if (pipe != std::string::npos)
		{
			key = line.substr(0, pipe - 1);
			value = std::atof(line.substr(pipe + 2).c_str());
			if (analyse_value(value) == 0 && analyse_date(key) == 0)
			{
				std::map<std::string, float>::iterator it = this->database.lower_bound(key);
				if (it->first == key)
					result = it->second * value;
				else
				{
					it--;
					result = it->second * value;
				}
				std::cout << key << " => " << value << " = " << result << std::endl;			
			}
		}
		else
			std::cout << "Error: bad input => " << line << std::endl;
	}
	inputfile.close();
}

int	BitcoinExchange::analyse_date(std::string date)
{
	std::string y, m, d;
	int	year, month, day;
	size_t pos = date.find_first_of("-");

	y = date.substr(0, pos).c_str();
	m = date.substr(pos + 1, 2).c_str();
	d = date.substr(date.find_last_of("-") + 1, std::string::npos).c_str();

	year = std::stoi(y);
	month = std::stoi(m);
	day = std::stoi(d);
	
	if (year < 2009 || (month < 1 || month > 12) || (day < 1 || day > 31))
	{
		std::cout << "Error: incorrect date." << std::endl;
		return (1);
	}
	else if (year == 2009 && month == 1 && day == 1)
	{
		std::cout << "Error: la tu forces quand meme..." << std::endl;
		return (1);
	}
	return (0);
}

int	BitcoinExchange::analyse_value(float value)
{
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (1);
	}
	else if (value >= INT_MAX)
	{
		std::cout << "Error: too large number" << std::endl;
		return (1);
	}
	return (0);	
}