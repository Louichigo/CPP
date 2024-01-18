# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lobertho <lobertho@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 16:18:20 by lobertho          #+#    #+#              #
#    Updated: 2023/11/29 16:33:08 by lobertho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

${NAME}:	${OBJS}
			c++ ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${OBJS} ${NAME}

re: fclean all

.PHONY:	all clean fclean re