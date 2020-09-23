# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/21 15:12:58 by cbertola          #+#    #+#              #
#    Updated: 2020/09/23 12:21:46 by cbertola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= annuaire
SRCSC		= Contact.cpp annuaire.cpp ft_add.cpp ft_search.cpp

SRCSH		= Contact.hpp Header.hpp
OBJS		= $(SRCSC:%.cpp=%.o)
LIBS 		= 
CXXFLAGS	= -Wall -Wextra -Werror
CXX			= clang++
LOGFILE		= $(LOGPATH) `date +'%y.%m.%d %H:%M:%S'`

all:		${NAME}

.c.o: ${OBJS}
	@clang++ ${CXXFLAGS} -cpp $< -o ${<:.cpp=.o}

$(NAME):	${OBJS} ${SRCSH}
			@${CXX} ${FLAGS} ${OBJS} ${LIBS} -o ${NAME}
			@echo "\033[1;32m┌─┐┬ ┬┌─┐┌─┐┌─┐┌─┐┌─┐"
			@echo 			"└─┐│ ││  │  ├┤ └─┐└─┐"
			@echo 			"└─┘└─┘└─┘└─┘└─┘└─┘└─┘"
			@echo "Program generated successfully.\033[0;0m"

bonus:		${NAME}

run:
			@make
			@./pony

clean:
			@rm -f ${OBJS}
			@echo "\033[1;31mProgram : Removing .o files\033[0;0m"

fclean:		clean
			@rm -f ${NAME}
			@echo "\033[1;31mProgram : Removing binary file\033[0;0m"

re:			fclean all

git:		fclean
			git add -A
			git add *
			git commit -u -m "$(LOGFILE) $(MSG)"
			git push

.PHONY:		all clean fclean re git
