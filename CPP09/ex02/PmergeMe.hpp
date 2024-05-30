/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <jmarks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:53:10 by jmarks            #+#    #+#             */
/*   Updated: 2024/05/30 11:27:36 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <climits>
#include <algorithm>
#include <stdlib.h>
#include <iomanip>
#include <sys/time.h>

class PmergeMe {
    private:
    std::vector<int> _unsortedVector;
    std::deque<int> _unsortedDeque;

    public:
    PmergeMe();
    PmergeMe(PmergeMe const &copy);
	PmergeMe &operator=(PmergeMe const &copy);
    ~PmergeMe();
    void initialise(int argc, char **argv);
    std::vector<int>    mergeInsertSortVector(std::vector<int>& vecElements);
    std::deque<int>     mergeInsertSortDeque(std::deque<int>& deqElements);
    int	    binarySearchDeque(const std::deque<int> &sorted, int element);
    int	    binarySearchVector(const std::vector<int> &sorted, int element);
    void    insertSmallestElementsDeque(std::deque<int> &sorted, const std::deque<int> &smaller);
    void    insertSmallestElementsVector(std::vector<int> &sorted, const std::vector<int> &smaller);
    void    printBefore(std::vector<int>& arr);
    void    printAfter(std::vector<int>& arr);
    void    printTime( std::string type );
};

#endif
