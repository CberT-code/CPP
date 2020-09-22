/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:35:36 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/22 21:24:34 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H


class Contact {

public:

	Contact(void);
	~Contact(void);

	static int		get_idmax(void);
	int				get_id(void) const;
	int				set_id(int);
	std::string		get_names(int) const;
	int				set_names(int, std::string);
	std::string		get_address(void) const;
	int				set_address(std::string);
	std::string		get_email(void) const;
	int				set_email(std::string);
	std::string		get_phone(void) const;
	int				set_phone(std::string);
	std::string		get_birthday(void) const;
	int				set_birthday(std::string);
	std::string		get_extra(int) const;
	int				set_extra(int, std::string);
	
private:

	std::string		_names[4];
	std::string		_address;
	std::string		_email;
	std::string		_phone;
	std::string		_birthday;
	std::string		_extra[3];

	int				_id;
	static int		_idmax;

};

#endif