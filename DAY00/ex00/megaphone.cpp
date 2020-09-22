/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:03:36 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/21 15:18:51 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char *argv[]){
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else{
		for(int i = 1; i < argc; ++i) {
			for(unsigned j = 0; j < strlen(argv[i]); ++j) {
				argv[i][j] = toupper(argv[i][j]);
			}
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
}

