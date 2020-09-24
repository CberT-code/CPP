/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:04:39 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 18:00:03 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>
# include <sstream>

class Brain
{
	public:
		Brain(void);
		Brain(int, int, int, int);
		~Brain(void);

		std::string		identify() const;

	private:
		int					_weight;
		int					_age;
		int					_size;
		int					_QI;
		std::string			_address;
};
#endif
