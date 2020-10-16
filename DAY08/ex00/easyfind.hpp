/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:53:44 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/16 10:29:37 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <iterator>

template<typename T>
bool	easyfind(T &container, const int i) {
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); it++)
		if (*it == i)
			return (1);
	return (0);
}

#endif