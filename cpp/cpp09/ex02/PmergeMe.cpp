/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:05:22 by lobertho          #+#    #+#             */
/*   Updated: 2024/03/21 00:11:52 by lobertho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	this->vec = rhs.vec;
	this->lis = rhs.lis;
	return (*this);
}

bool	PmergeMe::check_input(char **argv)
{
	int i = 1;
	std::string str;
	while (argv[i])
	{
		str = argv[i];
		for (size_t i = 0; i < str.length(); i++)
		{
			if (!std::isdigit(str[i]))
				return false;
		}
		if (std::atoi(argv[i]) < 0 || std::atoi(argv[i]) > INT_MAX)
			return false;
		i++;
	}
	return true;
}

void	PmergeMe::push_in_containers(char **argv)
{
	std::string str;
	int i = 1;

	while (argv[i])
	{
		str = argv[i];
		vec.push_back(std::stoi(str));
		lis.push_back(std::stoi(str));
		i++;
	}
}

void PmergeMe::printvector()
{
	std::vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::vector_mergeSort(std::vector<int> &v)
{
	int size = v.size();
	if (size <= 1)
		return;
	int middle = size / 2;

	std::vector<int> leftArray(v.begin(), v.begin() + middle);
	std::vector<int> rightArray(v.begin() + middle, v.end());

	vector_mergeSort(leftArray);
	vector_mergeSort(rightArray);
	vector_merge(leftArray, rightArray, v);
}

void	PmergeMe::vector_merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &base)
{
	size_t l = 0;
	size_t r = 0;
	size_t i = 0;

	while (l < left.size() && r < right.size())
	{
		if (left[l] < right[r])
			base[i++] = left[l++];
		else
			base[i++] = right[r++];
	}
	while (l < left.size())
		base[i++] = left[l++];
	while (r < right.size())
		base[i++] = right[r++];
}

void PmergeMe::list_mergeSort(std::list<int> &l)
{
    int size = l.size();
    if (size <= 1)
        return;
    int middle = size / 2;

    std::list<int> leftList(l.begin(), std::next(l.begin(), middle));
    std::list<int> rightList(std::next(l.begin(), middle), l.end());

    list_mergeSort(leftList);
    list_mergeSort(rightList);
    list_merge(leftList, rightList, l);
}

void PmergeMe::list_merge(std::list<int> &left, std::list<int> &right, std::list<int> &base)
{
    std::list<int>::iterator leftIter = left.begin();
    std::list<int>::iterator rightIter = right.begin();
    std::list<int>::iterator baseIter = base.begin();

    while (leftIter != left.end() && rightIter != right.end())
    {
        if (*leftIter < *rightIter)
            *(baseIter++) = *(leftIter++);
        else
            *(baseIter++) = *(rightIter++);
    }
    while (leftIter != left.end())
        *(baseIter++) = *(leftIter++);
    while (rightIter != right.end())
        *(baseIter++) = *(rightIter++);
}

void	PmergeMe::pmerge(char **argv)
{
	if (check_input(argv) == false)
	{
		std::cerr << "Error. Invalid input." << std::endl;
		return;
	}
	push_in_containers(argv);

	std::cout << "Before: ";
	printvector();

	clock_t start = clock();
	vector_mergeSort(vec);
	clock_t end = clock();
	double algo_time = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000);

	std::cout << "After: ";
	printvector();
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << algo_time << " ms" << std::endl;

	start = clock();
	list_mergeSort(lis);
	end = clock();
	algo_time = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000);
	std::cout << "Time to process a range of " << lis.size() << " elements with std::list : " << algo_time << " ms" << std::endl;
}