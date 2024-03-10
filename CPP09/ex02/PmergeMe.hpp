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

class PmergeMe {
    private:
    PmergeMe(PmergeMe const &copy);
	PmergeMe &operator=(PmergeMe const &copy);
    std::vector<int> _unsortedVector;
    std::deque<int> _unsortedDeque;

    std::vector<int> mergeVector(const std::vector<int>& left, const std::vector<int>& right);
    void mergeSortInsertVector(std::vector<int>& vec);
    std::deque<int> mergeDeque(const std::deque<int>& left, const std::deque<int>& right);
    void mergeSortInsertDeque(std::deque<int>& deq);

    public:
    PmergeMe();
    ~PmergeMe();
    void initialise(int argc, char **argv);
    void printBefore(std::vector<int>& arr);
    void printAfter(std::vector<int>& arr);
};

#endif
