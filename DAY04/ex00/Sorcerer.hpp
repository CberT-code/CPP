/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:32:30 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/07 11:23:04 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Victim.hpp"
#include "Peon.hpp"
#include "King.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string, std::string);
		Sorcerer(Sorcerer const &);
		virtual ~Sorcerer(void);

		Sorcerer &			operator=( Sorcerer const &);
		std::string			get_name(void) const;
		std::string			get_title(void) const;
		void				polymorph(Victim const &);
		void				polymorph(King const &);

	private:
		std::string			_name;
		std::string			_title;
};

std::ostream &		operator<<(std::ostream & o, Sorcerer const &);

#endif
