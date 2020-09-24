/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 20:50:09 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/24 21:55:35 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int					check_error(int argc, char **argv){
	std::string		str(argv[2]);
	std::string		str2(argv[3]);
	
	if (argc != 4){
		std::cout << RED << "Wrong number of arguments..." << std::endl;
		return (0);
	}
	std::ifstream		ifs(argv[1]);
	if (ifs.fail()){
		std::cout << RED << "Can't open the file " << argv[1] << std::endl;
		return (0);
	}
	else
		ifs.close();
	if (str.empty() || str2.empty())
		std::cout << RED << "arguments can't be empty!" << std::endl;
	return (1);
}

std::string			replace(std::string line, std::string str, std::string str2)
{
	size_t found;
	(void)str2;
	found = -1;

	while ((found = line.find(str, found + 1)) != std::string::npos )
		line.replace(found, str.length(), str2);
	return (line);
}

void				init_replace(char **argv)
{
	std::ifstream		ifs(argv[1]);
	std::ofstream		ofs("FILENAME.replace");
	std::string			line;

	while (getline(ifs, line))
	{
		line = replace(line, argv[2], argv[3]);
		ofs << line << std::endl;
	}
}

int			main(int argc, char **argv) {

	if (!check_error(argc,argv))
		return (0);
	init_replace(argv);
	return 0;
}
