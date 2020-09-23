/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hpp_to_cpp.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:57:46 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/23 15:45:13 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int			main(int argc, const char** argv) {
	std::string		str(argv[1]);
	std::string		name_class;
	std::ifstream	hpp(str);
	std::string		line;
	std::string		word;
	
	name_class = str.substr(0, str.find('.'));
	while (!word.compare("public:")){
		getline(hpp, line);
		word = line.substr(line.find_first_not_of('\t'), line.length());
	}
	std::cout << word;

	return 0;
}