/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <bgretic@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:08:28 by bgretic           #+#    #+#             */
/*   Updated: 2026/05/18 16:08:29 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Not found!");

	return (it);
}