/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:21:28 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/01 17:21:32 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &);
		~Fixed(void);

		Fixed &				operator=( Fixed const &);
		int					getRawBits(void) const;
		void				setRawBits(int const);

	private:
		int					RawBits;
		const static int	NbrBits;
};

#endif