/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   King.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:32:37 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 11:15:28 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KING_H
#define KING_H

#include "Victim.hpp"


class King
{
	public:
		King(void);
		King(std::string);
		King(King const &);
		virtual ~King(void);

		King &				operator=( King const &);
		std::string			get_name(void) const;
		virtual void		get_polymorphed(void) const;

	private:
		std::string					_name;
};

std::ostream &		operator<<(std::ostream & o, King const &);

#endif
