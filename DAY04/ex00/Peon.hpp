/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:32:37 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/10 09:21:13 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"


class Peon : public Victim
{
	public:
		Peon(void);
		Peon(std::string);
		Peon(Peon const &);
		virtual ~Peon(void);

		Peon &				operator=( Peon const &);
		std::string			get_name(void) const;
		virtual void		get_polymorphed(void) const;

	private:
		std::string					_name;
};

std::ostream &		operator<<(std::ostream & o, Peon const &);

#endif
