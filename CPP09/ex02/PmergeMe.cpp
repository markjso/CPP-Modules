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
	v_arr = copy.v_arr;
    d_arr = copy.d_arr;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy)
{
	v_arr = copy.v_arr;
    d_arr = copy.d_arr;
    return *this;
}

PmergeMe::~PmergeMe() {}

size_t PmergeMe::getJacobstahlNumber(size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (getJacobstahlNumber(n - 1) + 2 * getJacobstahlNumber(n - 2 ));
}

void PmergeMe::initialise(int argc, char **argv)
{
    std::vector<int> _arr;
    for (int i = 1; i < argc; ++i) 
    {
        int num = atoi(argv[i]);
        if (num < 0) 
        {
            std::cerr << "Error: Negative input." << std::endl;
            return ;
        }
        v_arr.push_back(num);
        d_arr.push_back(num);
    }
    printBefore(v_arr);
    clock_t start_time = clock();
    mergeInsertSort(v_arr);
    double time_vec = double(clock() - start_time) / CLOCKS_PER_SEC;
    printAfter(v_arr);
    std::cout << "Time to process a range of " << v_arr.size() 
    << " elements with std::vector: " << std::fixed << std::setprecision(5) 
    << time_vec << " us" << std::endl;

    clock_t start_time1 = clock();
    mergeInsertSort(d_arr);

    double time_deq = double(clock() - start_time1) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << d_arr.size() 
    << " elements with std::deque: " << std::fixed << std::setprecision(5) 
    << time_deq << " us" << std::endl;
}

std::vector<std::vector<int> > PmergeMe::makePairs(std::vector<int> arr) 
{
    std::vector<std::vector<int> > pairs;
    for (size_t i = 0; i < arr.size(); i += 2) 
    {
        if (i + 1 < arr.size())
        {
            std::vector<int> pair;
            pair.push_back(arr[i]);
            pair.push_back(arr[i + 1]);
            pairs.push_back(pair);
        } 
        else 
        {
            std::vector<int> pair;
            pair.push_back(arr[i]);
            pairs.push_back(pair);
        }
    }
    return pairs;
}

std::vector<std::vector<int> > PmergeMe::sortPairs(std::vector<std::vector<int> >& pairs) 
{
    for (size_t i = 0; i < pairs.size(); ++i) 
    {
        for (size_t j = i + 1; j < pairs.size(); ++j) 
        {
            if (pairs[j][0] < pairs[i][0]) 
            {
                std::swap(pairs[i], pairs[j]);
            }
        }
    }
    return pairs;
}



struct PairComparator 
{
    bool operator()(const std::vector<int>& a, const std::vector<int>& b) const 
    {
        return a[1] < b[1];
    }
};

void PmergeMe::sortPairsIntoHighest(std::vector<std::vector<int> >& pairs) 
{
    std::sort(pairs.begin(), pairs.end(), PairComparator());
}


std::vector<int> PmergeMe::getSortedVector(const std::vector<std::vector<int> >& myPairs) 
{
    std::vector<int> sorted;
    for (size_t i = 0; i < myPairs.size(); ++i) 
    {
        sorted.push_back(myPairs[i][1]);
    }
    return sorted;
}

std::vector<int> PmergeMe::getUnsortedVector(const std::vector<std::vector<int> >& myPairs) 
{
    std::vector<int> unsorted;
    for (size_t i = 0; i < myPairs.size(); ++i) 
    {
        if (myPairs[i].size() == 2) 
        {
            unsorted.push_back(myPairs[i][0]);
        }
    }
    return unsorted;
}

size_t PmergeMe::binarySearch(const std::vector<int>& arr, int insertNum) 
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == insertNum) 
        {
            return (mid);
        } 
        else if (arr[mid] < insertNum) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    return (low);
}

void PmergeMe::binaryInsert(std::vector<int>& arr, int insertNum) 
{
    size_t index = binarySearch(arr, insertNum);
    arr.insert(arr.begin() + index, insertNum);
}

void PmergeMe::mergeInsertSort(std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return; // Already sorted
    }

    std::vector<std::vector<int> > pairs = makePairs(arr);
    sortPairs(pairs);
    // sortPairsIntoHighest(pairs);

    // Separate main chain and pend chain
    std::vector<int> mainChain;
    std::vector<int> pendChain;
    for (size_t i = 0; i < pairs.size(); ++i) {
        const std::vector<int>& pair = pairs[i];
        if (pair.size() == 2) {
            mainChain.push_back(pair[1]); // Highest value
        } else {
            std::cout << "Adding pend element: " << pair[0] << std::endl;
            pendChain.push_back(pair[0]); // Pend element
        }
    }

    std::cout << "Main Chain: ";
    for (size_t i = 0; i < mainChain.size(); ++i) {
        std::cout << mainChain[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Pend Chain: ";
    for (size_t i = 0; i < pendChain.size(); ++i) {
        std::cout << pendChain[i] << " ";
    }
    std::cout << std::endl;

    // Insert pend elements into main chain
    size_t jacobIndex = 3;
    while (mainChain.size() < arr.size())
    {
        size_t nextJacob = getJacobstahlNumber(jacobIndex);
        if (nextJacob > pendChain.size())
        {
            nextJacob = pendChain.size();
        }
        nextJacob--;
        while (nextJacob > (getJacobstahlNumber(jacobIndex - 1) - 1))
        {
            binaryInsert(mainChain, pendChain[nextJacob]);
            nextJacob--;
        }
        jacobIndex++;
    }
    for (size_t k = 0; k < mainChain.size(); ++k)
    {
        arr[k] = mainChain[k];
    }
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

std::deque<std::deque<int> > PmergeMe::makePairs(std::deque<int> arr) 
{
    std::deque<std::deque<int> > pairs;
    for (size_t i = 0; i < arr.size(); i += 2) 
    {
        if (i + 1 < arr.size())
        {
            std::deque<int> pair;
            pair.push_back(arr[i]);
            pair.push_back(arr[i + 1]);
            pairs.push_back(pair);
        } 
        else 
        {
            std::deque<int> pair;
            pair.push_back(arr[i]);
            pairs.push_back(pair);
        }
    }
    return pairs;
}

std::deque<std::deque<int> > PmergeMe::sortPairs(std::deque<int> arr)
 { 
      std::deque<std::deque<int> > pairs;
      for (size_t i = 0; i < arr.size(); i += 2)
      {
          if (i + 1 < arr.size())
          {
              std::deque<int> pair;
              if (arr[i] < arr[i+1])
              {
                  pair.push_back(arr[i]);
                  pair.push_back(arr[i+1]);
              }
              else
              {
                  pair.push_back(arr[i+1]);
                  pair.push_back(arr[i]);
              }
              pairs.push_back(pair);
          }
          else
          {
              std::deque<int> pair;
              pair.push_back(arr[i]);
              pair.push_back(std::numeric_limits<int>::max());
              pairs.push_back(pair);
          }
      }
      return pairs;
  }

struct PairComparison
{
    bool operator()(const std::deque<int>& a, const std::deque<int>& b) const 
    {
        return a[1] < b[1];
    }
};

void PmergeMe::sortPairsIntoHighest(std::deque<std::deque<int> >& pairs) 
{
    std::sort(pairs.begin(), pairs.end(), PairComparison());
}


std::deque<int> PmergeMe::getSortedDeque(const std::deque<std::deque<int> >& myPairs) 
{
    std::deque<int> sorted;
    for (size_t i = 0; i < myPairs.size(); ++i) 
    {
        sorted.push_back(myPairs[i][1]);
    }
    return sorted;
}

std::deque<int> PmergeMe::getUnsortedDeque(const std::deque<std::deque<int> >& myPairs) 
{
    std::deque<int> unsorted;
    for (size_t i = 0; i < myPairs.size(); ++i) 
    {
        if (myPairs[i].size() == 2) 
        {
            unsorted.push_back(myPairs[i][0]);
        }
    }
    return unsorted;
}

int PmergeMe::binarySearch(const std::deque<int>& arr, int key) 
{
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) 
        {
            return mid;
        } 
        else if (arr[mid] < key) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    return left;
}

void PmergeMe::binaryInsert(std::deque<int>& arr, int key) 
{
    int index = binarySearch(arr, key);
    arr.insert(arr.begin() + index, key);
}

void PmergeMe::mergeInsertSort(std::deque<int>& arr)
{
    std::deque<std::deque<int> > pairs;
    pairs = makePairs(arr);
    pairs = sortPairs(arr);
    sortPairsIntoHighest(pairs);

    std::deque<int> mainChain = getSortedDeque(pairs);
    std::deque<int> pendChain = getUnsortedDeque(pairs);

    mainChain.insert(mainChain.begin(), pendChain[0]);

    int jacobIndex = 3;
    while (mainChain.size() < arr.size())
    {
        size_t nextJacob = getJacobstahlNumber(jacobIndex);
        if (nextJacob > pendChain.size())
        {
            nextJacob = pendChain.size();
        }
        nextJacob--;
        while (nextJacob > (getJacobstahlNumber(jacobIndex - 1) - 1))
        {
            binaryInsert(mainChain, pendChain[nextJacob]);
            nextJacob--;
        }
        jacobIndex++;
    }
    for (size_t k = 0; k < mainChain.size(); ++k)
    {
        arr[k] = mainChain[k];
    }
}