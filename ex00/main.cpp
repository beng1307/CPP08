/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <bgretic@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:08:32 by bgretic           #+#    #+#             */
/*   Updated: 2026/05/18 16:08:33 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int main()
{
	std::vector<int> container;
	container.push_back(1);
	container.push_back(2);
	container.push_back(3);

	try
	{
		std::vector<int>::iterator it = easyfind(container, 5);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}
}
