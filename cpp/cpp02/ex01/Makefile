# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 14:46:45 by lobertho          #+#    #+#              #
#    Updated: 2024/01/16 15:11:32 by lobertho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Fixed.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

${NAME}:	${OBJS}
			c++ ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		rm -rf ${OBJS}

fclean:	clean
		rm -rf ${OBJS} ${NAME}

re: fclean all

.PHONY:	all clean fclean re