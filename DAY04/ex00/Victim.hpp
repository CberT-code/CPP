/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:32:47 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 10:41:25 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include "Sorcerer.hpp"

class Victim
{
	public:
		Victim(void);
		Victim(std::string);
		Victim(Victim const &);
		virtual ~Victim(void);

		Victim &			operator=( Victim const &);
		std::string			get_name(void) const;
		virtual void		get_polymorphed(void) const;

	private:
		std::string			_name;
};

std::ostream &		operator<<(std::ostream & o, Victim const &);

#endif
