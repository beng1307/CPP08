/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <bgretic@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:08:41 by bgretic           #+#    #+#             */
/*   Updated: 2026/05/18 16:08:42 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span(): N(0)
{
	return ;
}

Span::Span(unsigned int N): N(N)
{
	return ;
}

Span::Span(const Span &other): N(other.N), numbers(other.numbers)
{
	return ;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->numbers = other.numbers;
	}

	return (*this);
}

Span::~Span()
{
	return ;
}

void	Span::addNumber(int number)
{
	if (numbers.size() >= N)
		throw std::runtime_error("Span is full");
	numbers.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	span;

	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	std::sort(numbers.begin(), numbers.end());

	span = *numbers.rbegin() - 	*numbers.begin();
	for (size_t i = 0; i < numbers.size() - 1; i++)
	{
		if (static_cast<unsigned int>(numbers[i + 1] - numbers[i]) < span)
			span = static_cast<unsigned int>(numbers[i + 1] - numbers[i]);
	}

	return span;
}

unsigned int	Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	std::sort(numbers.begin(), numbers.end());

	return (*numbers.rbegin() - *numbers.begin());
}