/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:05:31 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/21 00:01:32 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGERME_HPP
# define PMERGERME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cctype>
#include <limits>
#include <ctime>

class PmergeMe
{
private:
	std::vector<int> vec;
	std::list<int> lis;
	bool	check_input(char **argv);
	void	push_in_containers(char **argv);
	void	printvector();
	void	vector_mergeSort(std::vector<int> &v);
	void	vector_merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &base);
	void	list_mergeSort(std::list<int> &l);
	void	list_merge(std::list<int> &left, std::list<int> &right, std::list<int> &base);
	
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe &src);
	PmergeMe &operator=(const PmergeMe &rhs);
	
	void	pmerge(char **argv);
};

#endif