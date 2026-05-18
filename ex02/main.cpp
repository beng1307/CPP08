/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <bgretic@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:08:51 by bgretic           #+#    #+#             */
/*   Updated: 2026/05/18 16:28:07 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <string>

int main()
{
///////////////////////////////////////////////////////////////////////////////

	MutantStack<int>	testI;

	std::cout << testI.size() << std::endl;
	if (testI.begin() == testI.end())
		std::cout << "It's empty!" << std::endl;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	MutantStack<int>	testII;

	testII.push(42);
	for (MutantStack<int>::iterator it = testII.begin(); it != testII.end(); ++it)
		std::cout << *it << std::endl;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	MutantStack<std::string>	testIII;

	testIII.push("Hello");
	testIII.push("World");
	testIII.push("!");

	for (MutantStack<std::string>::iterator it = testIII.begin(); it != testIII.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << std::endl;
	for (MutantStack<std::string>::reverse_iterator it = testIII.rbegin(); it != testIII.rend(); ++it)
		std::cout << *it << std::endl;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	MutantStack<int>	testIV;
	const int			N = 100000;
	long long			sum = 0;

	for (int i = 0; i < N; i++)
		testIV.push(i);

	for (MutantStack<int>::iterator it = testIV.begin(); it != testIV.end(); ++it)
		sum += *it;

	std::cout << testIV.size() << std::endl;
	std::cout << testIV.top() << std::endl;
	std::cout << sum << std::endl;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	MutantStack<int>	copy(testIV);
	MutantStack<int>	assigned;

	assigned = testIV;
	testIV.pop();

	std::cout << testIV.size() << std::endl;
	std::cout << copy.size() << std::endl;
	std::cout << assigned.size() << std::endl;

	return (0);
}
