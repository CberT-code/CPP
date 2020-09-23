/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:59:25 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/23 17:05:33 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony
{
	public:
		Pony(void);
		~Pony(void);

		std::string		get_name(void) const;
		int				set_name(std::string);
		std::string		get_color(void) const;
		int				set_color(std::string);
		int				get_weight(void) const;
		int				set_weight(int);
		std::string		get_name_box(void) const;
		int				set_name_box(std::string);

	private:
		std::string		_name;
		std::string		_color;
		int				_weight;
		std::string		_name_box;
		

};

#endif
