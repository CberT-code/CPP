/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:53:40 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/15 19:54:02 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


template<typename U>
void	test_easyfind(U &container, int i)
{
	if (easyfind(container, i))
		std::cout << "We found " << i << " in this container!" << std::endl;
	else
		std::cout << "We didnt found " << i << " in this container!" << std::endl;
}

int main()
{
    std::list<int> intlst;
    for (int i = 0; i < 10; i++)
        intlst.push_back(i * 2);

	std::deque<int> intdeque;
	 for (int i = 0; i < 10; i++)
        intdeque.push_back(i * 5);

    std::vector<int> intvector;
    for (int i = 0; i < 20; i++)
        intvector.push_back(i * 4);

	std::set<int> intset;
	    for (int i = 0; i < 40; i++)
        intvector.push_back(i * 8);

	test_easyfind(intlst, 2);
	test_easyfind(intdeque, 5);
	test_easyfind(intvector, 2);
	test_easyfind(intvector, 6);

}