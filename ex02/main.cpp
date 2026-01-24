#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int>	stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	std::cout << "Size: " << stack.size() << std::endl;
	std::cout << std::endl;

	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	stack.pop();

	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << std::endl;

///////////////////////////////////////////////////////////////////////////////

	std::list<int>	list;
	
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);

	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

}