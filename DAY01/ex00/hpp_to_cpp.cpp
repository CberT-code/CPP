/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hpp_to_cpp.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:57:46 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/23 18:09:17 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Accessor.hpp"

void		save_class(std::string str, std::string name_class)
{
	std::ofstream	ofs;
	std::string 	tmp;
	std::string     name_var;
	int				start = 0;
	int				get = 0;
	int				set = 0;

	 //Oppening files
    ofs.open("test.cpp", std::ofstream::app);
    //Get function type
    ofs << str.substr(start, str.find_first_of('\t')) << "\t\t\t";
    //Get function name
    tmp = str.substr(str.find_last_of('\t') + 1, str.find_first_of("(") - str.find_last_of('\t') - 1);
    ofs << name_class << "::" << tmp << '(';
    //Get name of variable
    name_var = tmp.substr(3, tmp.length());
    //Get get or set
    get = tmp.substr(0,3).compare("get") ? 0 : 1;
    set = tmp.substr(0,3).compare("set") ? 0 : 1;
    //Get argument type
	//Get return
	if (get == 1){
		tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
		ofs << tmp << ")" ;
		tmp = str.substr(str.find_first_of(")") + 1, str.length() - str.find_first_of(")") - 2);	
		ofs << tmp  << "{" << std::endl << '\t' ;
	 	ofs << "return (this->" << name_var << ");" << std::endl << '}' << std::endl << std::endl;
	}
	else {
		if (set == 1){
			tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
			ofs << tmp << " value) {" << std::endl << '\t' ;
	 		ofs << "this->" << name_var << " = value;" << std::endl;
	 		ofs << "\treturn 1;" << std::endl << '}' << std::endl << std::endl;
		}
		else{
			tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
			ofs << tmp << ") {}" << std::endl << '\t' ;
		}
	}
}

int			main(int argc, const char** argv) {
	
	std::string		str(argv[1]);
	std::string		name_class;
	std::string		line;
	std::ifstream	hpp(str);
	
	name_class = str.substr(0, str.find('.'));
	while (line.compare("public:")){
		getline(hpp, line);
		if (!line.empty())
			line = line.substr(line.find_first_not_of('\t'), line.length());
	}
		getline(hpp, line);
		getline(hpp, line);
	while (getline(hpp, line)){
		if (!line.empty())
		{
			line = line.substr(line.find_first_not_of('\t'), line.length());
			if (line.compare("private:") == 0)
				break ;
			save_class(line, name_class);
		}
	}
	std::cout << "FIN" << std::endl;
	return 0;
}