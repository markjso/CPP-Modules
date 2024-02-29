/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:47:47 by jmarks            #+#    #+#             */
/*   Updated: 2024/02/05 11:47:49 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
std::list<int> newlist;
std::cout << "--------------Add '5' to stacks------------------------" << '\n';
mstack.push(5);
newlist.push_front(5);
std::cout << "--------------Add '17' to stacks-----------------------" << '\n';
mstack.push(17);
newlist.push_front(17);
std::cout << "--------------Print value at top of stacks-------------" << '\n';
std::cout << mstack.top() << std::endl;
std::cout << "\e[0;32m" << newlist.front() << "\e[0m" << std::endl;
std::cout << "--------------Remove value from top of stacks----------" << '\n';
mstack.pop();
newlist.pop_front();
std::cout << "--------------Print value at top of stacks-------------" << '\n';
std::cout << mstack.top() << std::endl;
std::cout << "\e[0;32m" << newlist.front() << "\e[0m" << std::endl;
std::cout << "--------------Print size of stacks---------------------" << '\n';
std::cout << mstack.size() << std::endl;
std::cout << "\e[0;32m" << newlist.size() << "\e[0m" << std::endl;
std::cout << "--------------Add values to stacks---------------------" << '\n';
mstack.push(3);
newlist.push_back(3);
mstack.push(5);
newlist.push_back(5);
mstack.push(737);
newlist.push_back(737);
mstack.push(0);
newlist.push_back(0);
std::cout << "--------------Create iterators-------------------------" << '\n';
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
std::list<int>::iterator itl = newlist.begin();
std::list<int>::iterator itle = newlist.end();
++it;
--it;
std::cout << "--------------Test increment of stack------------------" << '\n';
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
std::cout << "--------------Test increment of list-------------------" << '\n';
while (itl != itle)
{
	std::cout << "\e[0;32m" << *itl << "\e[0m" << std::endl;
	++itl;
}
std::cout << "--------------Test reverse iterators ------------------" << '\n';
MutantStack<int>::reverse_iterator rit = mstack.rbegin();
std::cout << "First element of reverse: " << *rit << std::endl;
MutantStack<int>::reverse_iterator rite = mstack.rend();
rite--;
std::cout << "Last element of reverse: " << *rite << std::endl;
std::cout << "--------------Create stack using copy constructor------" << '\n';
std::stack<int> s(mstack);
std::cout << "--------------Print size of copy stack ----------------" << '\n';
std::cout << s.size() << std::endl;

return 0;
}