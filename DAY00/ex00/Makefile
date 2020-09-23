# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/21 15:12:58 by cbertola          #+#    #+#              #
#    Updated: 2020/09/23 12:01:51 by cbertola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCSC		= megaphone.cpp

#SRCSH		= 
OBJS		= $(SRCSC:%.cpp=%.o)
#LIBS 		= 
FLAGS		= -Wall -Wextra -Werror
CC			= clang++
LOGFILE		= $(LOGPATH) `date +'%y.%m.%d %H:%M:%S'`

all:		${NAME}

.c.o: ${OBJS}
	clang++ ${FLAGS} -cpp $< -o ${<:.cpp=.o}


$(NAME):	${OBJS} ${SRCSH}
			@${CC} ${FLAGS} ${OBJS} ${LIBS} -o ${NAME}
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
