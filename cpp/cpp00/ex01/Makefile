# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lobertho <lobertho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 16:50:23 by lobertho          #+#    #+#              #
#    Updated: 2024/01/18 11:28:50 by lobertho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Phonebook.cpp Contact.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

${NAME}:	${OBJS}
			c++ ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		rm -rf ${OBJS}

fclean:	clean
		rm -rf ${OBJS} ${NAME}

re: fclean all

.PHONY:	all clean fclean re