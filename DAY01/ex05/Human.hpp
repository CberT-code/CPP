/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:04:39 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 17:58:37 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

# include "Brain.hpp"

class Human
{
	public:
		Human(void);
		~Human(void);

		std::string		identify() const;
		const Brain		&getBrain() const;

	private:
		const Brain		_brain;
};
#endif
