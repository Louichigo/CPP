/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:01:32 by lobertho          #+#    #+#             */
/*   Updated: 2024/01/18 15:28:34 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream file(argv[1]);
	std::string line;

	if (argc != 4)
	{
		std::cout << "\033[31m" << "Error! Please enter 3 arguments:\n-Filename\n-String you want to replace occurences\n-String you want to replace occurences by" << "\033[0m" << std::endl;
		return 0;
	}
	if(file)
	{
		std::string	s1 = argv[2];
		std::string s2 = argv[3];
		std::string replacename = argv[1];
		replacename.append(".replace");
		std::ofstream replacefile(replacename);
		while(std::getline(file, line))
		{
			size_t pos = line.find(s1, 0);
			while (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos = line.find(s1, pos + s2.length());
			}
			replacefile << line << std::endl;
		}
		file.close();
		replacefile.close();
	}
	else
		std::cout << "\033[31m" << "This file does not exist." << "\033[0m" << std::endl;
	return 0;
}