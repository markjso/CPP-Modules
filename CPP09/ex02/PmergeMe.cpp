/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:53:03 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/29 16:53:05 by jmarks           ###   ########.fr       */
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

void PmergeMe::initialise(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) 
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j])) 
            {
                std::cerr << "Error: Invalid character " << argv[i][j] << std::endl;
                return ;
            }
        }
        _unsortedVector.push_back(atoi(argv[i]));
        _unsortedDeque.push_back(atoi(argv[i]));
    }
    printBefore(_unsortedVector);
    clock_t start_time = clock();
    mergeSortInsertVector(_unsortedVector);
    double time_vec = double(clock() - start_time) / CLOCKS_PER_SEC;
    printAfter(_unsortedVector);
    std::cout << "Time to process a range of " << _unsortedVector.size() 
    << " elements with std::vector: " << std::fixed << std::setprecision(5) 
    << time_vec << " us" << std::endl;

    clock_t start_time1 = clock();
    mergeSortInsertDeque(_unsortedDeque);

    double time_deq = double(clock() - start_time1) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << _unsortedDeque.size() 
    << " elements with std::deque: " << std::fixed << std::setprecision(5) 
    << time_deq << " us" << std::endl;
}

std::vector<int> PmergeMe::mergeVector(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    std::vector<int>::const_iterator left_iter = left.begin();
    std::vector<int>::const_iterator right_iter = right.begin();

    while (left_iter != left.end() && right_iter != right.end()) 
    {
        if (*left_iter < *right_iter) 
        {
            result.push_back(*left_iter);
            ++left_iter;
        } 
        else 
        {
            result.push_back(*right_iter);
            ++right_iter;
        }
    }
    // Append remaining elements
    while (left_iter != left.end())
    {
        result.push_back(*left_iter);
        ++left_iter;
    }
    while (right_iter != right.end()) 
    {
        result.push_back(*right_iter);
        ++right_iter;
    }
    return (result);
}

void PmergeMe::mergeSortInsertVector(std::vector<int>& vec) 
{
    if (vec.size() <= 1) 
    {
        return;
    }
    std::vector<int> left;
    std::vector<int> right;
    std::vector<int>::iterator middle = vec.begin() + (vec.size() / 2);

    // Split vector into two halves
    for (std::vector<int>::iterator it = vec.begin(); it != middle; ++it) 
    {
        left.push_back(*it);
    }
    for (std::vector<int>::iterator it = middle; it != vec.end(); ++it) 
    {
        right.push_back(*it);
    }
    // Recursively sort each half
    mergeSortInsertVector(left);
    mergeSortInsertVector(right);
    // Merge the sorted halves
    vec = mergeVector(left, right);
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

std::deque<int> PmergeMe::mergeDeque(const std::deque<int>& left, const std::deque<int>& right) 
{
    std::deque<int> result;
    std::deque<int>::const_iterator left_iter = left.begin();
    std::deque<int>::const_iterator right_iter = right.begin();

    while (left_iter != left.end() && right_iter != right.end()) 
    {
        if (*left_iter < *right_iter) 
        {
            result.push_back(*left_iter);
            ++left_iter;
        } 
        else 
        {
            result.push_back(*right_iter);
            ++right_iter;
        }
    }
    // Append remaining elements
    while (left_iter != left.end()) 
    {
        result.push_back(*left_iter);
        ++left_iter;
    }
    while (right_iter != right.end()) 
    {
        result.push_back(*right_iter);
        ++right_iter;
    }
    return (result);
}

void PmergeMe::mergeSortInsertDeque(std::deque<int>& deq) 
{
    if (deq.size() <= 1) 
    {
        return;
    }

    std::deque<int> left;
    std::deque<int> right;
    std::deque<int>::iterator middle = deq.begin() + (deq.size() / 2);
    // Split deque into two halves
    for (std::deque<int>::iterator it = deq.begin(); it != middle; ++it) 
    {
        left.push_back(*it);
    }
    for (std::deque<int>::iterator it = middle; it != deq.end(); ++it) 
    {
        right.push_back(*it);
    }
    // Recursively sort each half
    mergeSortInsertDeque(left);
    mergeSortInsertDeque(right);
    // Merge the sorted halves
    deq = mergeDeque(left, right);
}
