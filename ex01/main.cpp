/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <bgretic@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:08:38 by bgretic           #+#    #+#             */
/*   Updated: 2026/05/18 16:22:27 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

///////////////////////////////////////////////////////////////////////////////

	Span testI = Span(5);
	
	testI.addNumber(732);
	testI.addNumber(1);
	testI.addNumber(42);
	testI.addNumber(32);
	testI.addNumber(43);

	try
	{
		std::cout << testI.shortestSpan() << std::endl;
		std::cout << testI.longestSpan() << std::endl;	
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	Span testII = Span(5);

	try
	{
		std::cout << testII.shortestSpan() << std::endl;
		std::cout << testII.longestSpan() << std::endl;	
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	Span testIII = Span(20000);
	try
	{
		for (int i = 0; i < 20000; i++)
			testIII.addNumber(std::rand() % INT_MAX);
		std::cout << testIII.shortestSpan() << std::endl;
		std::cout << testIII.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;


	Span testIV = Span(10000);

	std::vector<int> vector;
	for (int i = 0; i < 10000; i++)
		vector.push_back(std::rand() % INT_MAX);

	try
	{
		testIV.addMoreNumbers(vector.begin(), vector.end());
		std::cout << testIV.shortestSpan() << std::endl;
		std::cout << testIV.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;


	Span testV = Span(1);
	testV.addNumber(42);
	try
	{
		std::cout << testV.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << testV.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;


	Span testVI = Span(3);
	testVI.addNumber(10);
	testVI.addNumber(20);
	testVI.addNumber(30);
	try
	{
		testVI.addNumber(40);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
