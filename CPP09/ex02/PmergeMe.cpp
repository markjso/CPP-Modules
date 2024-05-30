/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:53:03 by jmarks            #+#    #+#             */
/*   Updated: 2024/05/30 11:57:02 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	_unsortedVector = copy._unsortedVector;
    _unsortedDeque = copy._unsortedDeque;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy)
{
	_unsortedVector = copy._unsortedVector;
    _unsortedDeque = copy._unsortedDeque;
    return (*this);
}

PmergeMe::~PmergeMe() {}

double getElapsedTime(struct timespec start, struct timespec end) {
        return (end.tv_sec - start.tv_sec) * 1e9 + (end.tv_nsec - start.tv_nsec);
    }

void PmergeMe::initialise(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) 
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j])) 
            {
                std::cerr << "Error: Invalid character " << argv[i][j] << std::endl;
                return;
            }
        }
        _unsortedVector.push_back(atoi(argv[i]));
        _unsortedDeque.push_back(atoi(argv[i]));
    }
    printBefore(_unsortedVector);

    struct timespec start_time_vec, end_time_vec;
    clock_gettime(CLOCK_MONOTONIC, &start_time_vec);
    mergeInsertSortVector(_unsortedVector);
    clock_gettime(CLOCK_MONOTONIC, &end_time_vec);
    double time_vec = getElapsedTime(start_time_vec, end_time_vec) / 1000000;  // Convert to microseconds
    printAfter(_unsortedVector);
    std::cout << "Time to process a range of " << _unsortedVector.size() 
              << " elements with std::vector: " << std::fixed << std::setprecision(5) 
              << time_vec << " us" << std::endl;

    struct timespec start_time_deq, end_time_deq;
    clock_gettime(CLOCK_MONOTONIC, &start_time_deq);
    mergeInsertSortDeque(_unsortedDeque);
    clock_gettime(CLOCK_MONOTONIC, &end_time_deq);
    double time_deq = getElapsedTime(start_time_deq, end_time_deq) / 100000;  // Convert to microseconds
    std::cout << "Time to process a range of " << _unsortedDeque.size() 
              << " elements with std::deque: " << std::fixed << std::setprecision(5) 
              << time_deq << " us" << std::endl;
}

int	PmergeMe::binarySearchVector(const std::vector<int> &sorted, int element)
{
	int	left = 0;
	int	right = sorted.size() - 1;
	while (left <= right)
	{
		int	mid = left + (right - left) / 2;
		if (sorted[mid] == element)
			return mid;
		if (sorted[mid] < element)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (left);
}

void    PmergeMe::insertSmallestElementsVector(std::vector<int> &sorted, const std::vector<int> &smaller)
{
	for (size_t i = 0; i < smaller.size(); ++i)
	{
		int position = binarySearchVector(sorted, smaller[i]);
		sorted.insert(sorted.begin() + position, smaller[i]);
	}
}

std::vector<int>PmergeMe::mergeInsertSortVector(std::vector<int>& vecElements) 
{
    int	n = vecElements.size();
	if (n <= 1)
		return (vecElements);
	// performing n/2 comparisions to create n/2 pairs
	// sorting the pairs by the larger element
	std::vector<std::pair<int, int> > pairs;
	for (int i = 0; i < n-1; i += 2)
	{
		if (vecElements[i] > vecElements[i + 1])
			pairs.push_back(std::make_pair(vecElements[i], vecElements[i + 1]));
		else if (vecElements[i] < vecElements[i + 1])
			pairs.push_back(std::make_pair(vecElements[i + 1], vecElements[i]));
	}
	if (n % 2 == 1)
		pairs.push_back(std::make_pair(vecElements[n - 1], INT_MIN));

	// recursively sort the larger elements from the pairs to create new sorted sequence
	std::vector<int>	larger;
	std::vector<int>	sorted;
	std::vector<int>	smaller;

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		larger.push_back(pairs[i].first);
		if (pairs[i].second != INT_MIN)
			smaller.push_back(pairs[i].second);
	}
	sorted = larger;
	mergeInsertSortVector(sorted);

	// insert the smaller elements into the sorted sequence
	insertSmallestElementsVector(sorted, smaller);

	vecElements = sorted;
	return (sorted);
}

void PmergeMe::printBefore(std::vector<int>& arr) 
{
    std::cout << "Before: ";
    for (size_t i = 0; i < arr.size(); ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printAfter(std::vector<int>& arr) 
{
    std::cout << "After: ";
    for (size_t i = 0; i < arr.size(); ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int	PmergeMe::binarySearchDeque(const std::deque<int> &sorted, int element)
{
	int	left = 0;
	int	right = sorted.size() - 1;
	while (left <= right)
	{
		int	mid = left + (right - left) / 2;
		if (sorted[mid] == element)
			return mid;
		if (sorted[mid] < element)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (left);
}

void    PmergeMe::insertSmallestElementsDeque(std::deque<int> &sorted, const std::deque<int> &smaller)
{
	for (size_t i = 0; i < smaller.size(); ++i)
	{
		int position = binarySearchDeque(sorted, smaller[i]);
		sorted.insert(sorted.begin() + position, smaller[i]);
	}
}

std::deque<int>PmergeMe::mergeInsertSortDeque(std::deque<int>& deqElements)
{
    int	n = deqElements.size();
	if (n <= 1)
		return (deqElements);
	// performing n/2 comparisions to create n/2 pairs
	// sorting the pairs by the larger element
	std::deque<std::pair<int, int> > pairs;
	for (int i = 0; i < n-1; i += 2)
	{
		if (deqElements[i] > deqElements[i + 1])
			pairs.push_back(std::make_pair(deqElements[i], deqElements[i + 1]));
		else if (deqElements[i] < deqElements[i + 1])
			pairs.push_back(std::make_pair(deqElements[i + 1], deqElements[i]));
	}
	if (n % 2 == 1)
		pairs.push_back(std::make_pair(deqElements[n - 1], INT_MIN));

	// recursively sort the larger elements from the pairs to create new sorted sequence
	std::deque<int>	larger;
	std::deque<int>	sorted;
	std::deque<int>	smaller;

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		larger.push_back(pairs[i].first);
		if (pairs[i].second != INT_MIN)
			smaller.push_back(pairs[i].second);
	}
	sorted = larger;
	mergeInsertSortDeque(sorted);

	// insert the smaller elements into the sorted sequence
	insertSmallestElementsDeque(sorted, smaller);

	deqElements = sorted;
	return (sorted);
}