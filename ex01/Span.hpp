/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <bgretic@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:08:45 by bgretic           #+#    #+#             */
/*   Updated: 2026/05/18 16:08:46 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class	Span
{
	private:

		unsigned int		N;
		std::vector<int>	numbers;

	public:

		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void			addNumber(int number);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		template <typename Iterator>
		void	addMoreNumbers(Iterator begin, Iterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				begin++;
			}
		}
};

#endif