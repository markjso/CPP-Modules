/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:53:10 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/29 16:53:12 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <iomanip>

class PmergeMe 
{
	private:	
		PmergeMe(PmergeMe const &copy);
		PmergeMe &operator=(PmergeMe const &copy);
		std::vector<int> v_arr;
		std::deque<int> d_arr;

	public:
		PmergeMe();
		~PmergeMe();
		size_t getJacobstahlNumber(size_t n);
		void initialise(int argc, char **argv);
		std::vector<std::vector<int> > makePairs(std::vector<int> arr);
		std::vector<std::vector<int> > sortPairs(std::vector<std::vector<int> >& pairs);
		void sortPairsIntoHighest(std::vector<std::vector<int> >& pairs);
		std::vector<int> getSortedVector(const std::vector<std::vector<int> >& myPairs);
		std::vector<int> getUnsortedVector(const std::vector<std::vector<int> >& myPairs);
		size_t binarySearch(const std::vector<int>& arr, int insertNum);
		void binaryInsert(std::vector<int>& arr, int insertNum);
		void mergeInsertSort(std::vector<int>& mainChain);
		void printBefore(std::vector<int>& arr);
    	void printAfter(std::vector<int>& arr);
		std::deque<std::deque<int> > makePairs(std::deque<int> arr);
		std::deque<std::deque<int> > sortPairs(std::deque<int> arr);
		void sortPairsIntoHighest(std::deque<std::deque<int> >& pairs);
		std::deque<int> getSortedDeque(const std::deque<std::deque<int> >& myPairs);
		std::deque<int> getUnsortedDeque(const std::deque<std::deque<int> >& myPairs);
		int binarySearch(const std::deque<int>& arr, int key);
		void binaryInsert(std::deque<int>& arr, int key);
		void mergeInsertSort(std::deque<int>& mainChain);
};

#endif