/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:16:09 by lobertho          #+#    #+#             */
/*   Updated: 2023/11/29 16:45:05 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *toupper(char *str)
{
	int i;

	for(i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(i = 1; i < argc; i++)
		std::cout << toupper(argv[i]);
	std::cout << std::endl;
	return (0);
}