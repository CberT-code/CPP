/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hpp_to_cpp.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:57:46 by cbertola          #+#    #+#             */
/*   Updated: 2020/09/23 20:16:42 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Accessor.hpp"

void		display(Accessor *accessor, std::string str, std::ofstream	*ofs)
{
	std::string			tmp;
	int 				i = -1;

	*ofs << accessor->get_type();
	while (++i < accessor->get_tab())
		*ofs << '\t';
	*ofs << accessor->get_name_class() << "::" << accessor->get_name() << '(';
	if (accessor->get_ind() == 1){
		tmp = str.substr(str.find_first_of("(") + 1, str.length() - str.find_first_of("(") - 2);
		*ofs << tmp  << "{\n\treturn (this->" << accessor->get_name_var() << ");\n}\n\n";
	}
	else if (accessor->get_ind() == 2){
		tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
		*ofs << tmp << " value) {\n\tthis->" << accessor->get_name_var() << " = value;\n\treturn 1;\n}\n\n";
	}
	else{
		tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
		*ofs << tmp << ") {}" << std::endl << '\t' ;
	}
	return ;
}

void		parsing(std::string str, std::string name_class, std::ofstream	*ofs)
{
	std::string 	tmp;
	Accessor		accessor;

	//Set class name
	accessor.set_name_class(name_class);
    //Set function type
    accessor.set_type(str.substr(0, str.find_first_of('\t')));
    //Get function name
   	accessor.set_name(str.substr(str.find_last_of('\t') + 1, str.find_first_of("(") - str.find_last_of('\t') - 1));
	tmp = accessor.get_name();
    //Get name of variable
   	accessor.set_name_var(tmp.substr(3, tmp.length()));
	//Get argument
	accessor.set_args(str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1));
	//Display all
	display(&accessor, str, ofs);
}

// void		save_class(std::string str, std::string name_class)
// {
// 	std::ofstream	ofs;
// 	std::string 	tmp;
// 	std::string     name_var;
// 	int				start = 0;
// 	int				get = 0;
// 	int				set = 0;

	//  //Oppening files
    // ofs.open("test.cpp", std::ofstream::app);
    // //Get function type
    // ofs << str.substr(start, str.find_first_of('\t')) << "\t\t\t";
    // //Get function name
    // tmp = str.substr(str.find_last_of('\t') + 1, str.find_first_of("(") - str.find_last_of('\t') - 1);
    // ofs << name_class << "::" << tmp << '(';
    // //Get name of variable
    // name_var = tmp.substr(3, tmp.length());
    // //Get get or set
    // get = tmp.substr(0,3).compare("get") ? 0 : 1;
    // set = tmp.substr(0,3).compare("set") ? 0 : 1;
    // //Get argument type
	// //Get return
	// if (get == 1){
	// 	tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
	// 	ofs << tmp << ")" ;
	// 	tmp = str.substr(str.find_first_of(")") + 1, str.length() - str.find_first_of(")") - 2);	
	// 	ofs << tmp  << "{" << std::endl << '\t' ;
	//  	ofs << "return (this->" << name_var << ");" << std::endl << '}' << std::endl << std::endl;
	// }
	// else {
	// 	if (set == 1){
	// 		tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
	// 		ofs << tmp << " value) {" << std::endl << '\t' ;
	//  		ofs << "this->" << name_var << " = value;" << std::endl;
	//  		ofs << "\treturn 1;" << std::endl << '}' << std::endl << std::endl;
	// 	}
	// 	else{
	// 		tmp = str.substr(str.find_first_of("(") + 1, str.find_first_of(")") - str.find_first_of("(") - 1);
	// 		ofs << tmp << ") {}" << std::endl << '\t' ;
	// 	}
	// }
// }

int			main(int argc, const char** argv) {
	
	std::string		str(argv[1]);
	std::string		name_class;
	std::string		line;
	std::ifstream	hpp;
	std::ofstream	ofs("test.cpp", std::ofstream::app);
	
	name_class = str.substr(0, str.find('.'));
	if (hpp.open(name_class + ".cpp") == 1)
		name_class += "-copy"
	ofs << "#include \"" << name_class  << ".hpp\"\n\n";
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
			parsing(line, name_class, &ofs);
		}
	}
	std::cout << "FIN" << std::endl;
	return 0;
}